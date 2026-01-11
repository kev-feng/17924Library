#include "CustomFiles/Drive.hpp"
#include "pros/misc.h"
#include "pros/misc.hpp"
#include <math.h>

#include "subsystems.hpp"


bool Drive_state = false;

int y_input = 0;
int x_input = 0;
int rot_input = 0;

float y_pwr = 0.0;
float x_pwr = 0.0;
float rot_pwr = 0.0;

float left_pwr = 0.0;
float right_pwr = 0.0;
float FrntLft = 0.0;
float FrntRght = 0.0;
float BkLft = 0.0;
float BkRght = 0.0;

bool RakePiston_State = false;
bool TopDoorPiston_State = false;

bool scoring_enabled = true;
bool rake_enabled = true;
bool scoring_height = true;

void joystickMapping(float tx, float ty, float trot, bool Joystick){

	if (Joystick == true){

		y_input = master.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);    // Gets amount forward/backward from left joystick
		x_input = master.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_X);  // Gets the turn left/right from right joystick

	}
	else {

		y_input = master.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);    // Gets amount forward/backward from left joystick
		x_input = master.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);  // Gets the turn left/right from right joystick
	
	}

	y_pwr = (exp(-(ty/10.0)) + exp((abs(y_input) - 127.0) / 10.0) * (1.0 - exp(-(ty / 10.0)))) * y_input * 100;
	x_pwr = (exp(-(tx/10.0)) + exp((abs(x_input) - 127.0) / 10.0) * (1.0 - exp(-(tx / 10.0)))) * x_input * 100;

	left_pwr = y_pwr + x_pwr;
	right_pwr = y_pwr - x_pwr;

	if (left_pwr > 12000){
        left_pwr = 12000;
    }
    
    if (right_pwr > 12000){
        right_pwr = 12000;
    }

}

void SingleArcade_drive(float tx, float ty, float pwr){

	joystickMapping(tx,ty, 0.0, true);

	left_mg.move_voltage(left_pwr * pwr);
	right_mg.move_voltage(right_pwr * pwr);

	/*if (pros::battery::get_capacity() > 30){
		left_mg.move_voltage(left_pwr * pwr);
		right_mg.move_voltage(right_pwr * pwr);
	}
	else {
		left_mg.move_voltage(0);
		right_mg.move_voltage(0);
	}*/
}

void SplitArcade_drive(float tx, float ty, float pwr){

	joystickMapping(tx,ty, 0.0, false);

	if (pros::battery::get_capacity() > 30){
		left_mg.move_voltage(left_pwr * pwr);
		right_mg.move_voltage(right_pwr * pwr);
	}
	else {
		left_mg.move_voltage(0);
		right_mg.move_voltage(0);
	}
}

void scoring(){


	if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)){
		Intake.move_voltage(12000);
		Top_Scorer.move_voltage(12000);
	}
	else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)){
		Intake.move_voltage(-9000);
		Top_Scorer.move_voltage(-9000);
	}
	else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)){

		Intake.move_voltage(12000);
		Top_Scorer.move_voltage(-6000);
	}
	else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)){

		Intake.move_voltage(12000);
		Top_Scorer.move_voltage(-4500);
	}
	else {
		Intake.move_voltage(0);
		Top_Scorer.move_voltage(0);
	}


}

void pneumatics() {

	if (master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_A)) {

		RakePiston_State = !RakePiston_State;

	}

	if (master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_B)) {

		TopDoorPiston_State = !TopDoorPiston_State;

	}
	
	rake_piston.set_value(RakePiston_State);
	door_piston.set_value(TopDoorPiston_State);


}

void newdrive(){

	





}


