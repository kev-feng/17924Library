#include "CustomFiles/CustomAutos.hpp"
#include "EZ-Template/PID.hpp"
#include "main.h"
#include "pros/rtos.hpp"
#include "subsystems.hpp"

const int DRIVE_SPEED = 110;
const int TURN_SPEED = 90;
const int SWING_SPEED = 110;

//big R was here
//Big R was here again


void JoyceRight(){
	chassis.slew_drive_constants_forward_set(5_in, 50);
	chassis.slew_drive_constants_backward_set(5_in, 50);

	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	rake_piston.set_value(false);
	door_piston.set_value(false);
	chassis.pid_drive_set(19.5_in, 75,true); 
	chassis.pid_wait();
	//Move forward towards Match loader

	rake_piston.set_value(true);
	chassis.pid_turn_relative_set(90_deg, 80);
	//chassis.pid_turn_set(90_deg, TURN_SPEED);
	chassis.pid_wait();	
	Intake.move_voltage(11000);
	Top_Scorer.move_voltage(11000);
	//Put rake down and turn to face matchloader

	chassis.pid_drive_set(12.5_in, 40,true);
	chassis.pid_wait(); 
	pros::delay(2100);
	//drive into match loader

	chassis.pid_turn_relative_set(5,30);
	chassis.pid_wait();
	//slight curve to align with long goal

	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	rake_piston.set_value(false);


	chassis.pid_drive_set(-11.75_in, 80);
	chassis.pid_wait_quick_chain();
	door_piston.set_value(true);
	Intake.move_voltage(12000);
	Top_Scorer.move_voltage(12000);
	pros::delay(3000);
	//Back up and score into long goal


	chassis.pid_drive_set(5_in, 90);
	chassis.pid_wait_quick();
	door_piston.set_value(false);
	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	//Back away from long goal

	chassis.pid_drive_set(-5_in, 127);
	chassis.pid_wait_quick();
	//Ram the long goal?



	/*
	chassis.pid_drive_set(16_in, DRIVE_SPEED,true); 
	door_piston.set_value(true);
	rake_piston.set_value(true);
	chassis.pid_wait();
	door_piston.set_value(false);
	rake_piston.set_value(false);

	chassis.pid_turn_set(225_deg, TURN_SPEED);
  	chassis.pid_wait(); 
	Intake.move_voltage(-12000);
	Top_Scorer.move_voltage(12000);

	chassis.pid_drive_set(20_in, 80,true); 
	chassis.pid_wait_quick_chain();
	chassis.pid_drive_set(11_in, 150,true); 
	chassis.pid_wait();
	pros::delay(1500);
	chassis.pid_drive_set(11_in, 15,true); 
	chassis.pid_wait(); 
	pros::delay(1000);
	chassis.pid_drive_set(15_in, 15,true); 
	chassis.pid_wait(); 
	Intake.move_voltage(-12000);
	Top_Scorer.move_voltage(12000);
*/
}

void JoyceLeft(){

	chassis.slew_drive_constants_forward_set(5_in, 50);
	chassis.slew_drive_constants_backward_set(5_in, 50);

	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	rake_piston.set_value(false);
	door_piston.set_value(false);
	chassis.pid_drive_set(21.5_in, 75,true); 
	chassis.pid_wait();
	//Move forward towards Match loader

	rake_piston.set_value(true);
	chassis.pid_turn_relative_set(-90_deg, 80);
	//chassis.pid_turn_set(90_deg, TURN_SPEED);
	chassis.pid_wait();	
	Intake.move_voltage(11000);
	Top_Scorer.move_voltage(11000);
	//Put rake down and turn to face matchloader


	chassis.pid_drive_set(11.5_in, 40,true);
	chassis.pid_wait(); 
	pros::delay(2100);
	//drive into match loader

	chassis.pid_turn_relative_set(5,30);
	chassis.pid_wait();
	//slight curve to align with long goal

	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	rake_piston.set_value(false);
	


	chassis.pid_drive_set(-12.5_in, 80);
	chassis.pid_wait_quick_chain();
	door_piston.set_value(true);
	Intake.move_voltage(12000);
	Top_Scorer.move_voltage(12000);
	pros::delay(3000);
	//Back up and score into long goal


	chassis.pid_drive_set(5_in, 90);
	chassis.pid_wait_quick();
	door_piston.set_value(false);
	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	//Back away from long goal

	chassis.pid_drive_set(-5_in, 127);
	chassis.pid_wait_quick();
	//Ram the long goal?


	//



	/*
	chassis.pid_drive_set(16_in, DRIVE_SPEED,true); 
	door_piston.set_value(true);
	rake_piston.set_value(true);
	chassis.pid_wait();
	door_piston.set_value(false);
	rake_piston.set_value(false);

	chassis.pid_turn_set(-225_deg, TURN_SPEED);
  	chassis.pid_wait(); 
	Intake.move_voltage(-12000);
	Top_Scorer.move_voltage(12000);

	chassis.pid_drive_set(20_in, 80,true); 
	chassis.pid_wait_quick_chain();
	chassis.pid_drive_set(11_in, 12,true); 
	chassis.pid_wait();
	pros::delay(1500);
	chassis.pid_drive_set(11_in, 15,true); 
	chassis.pid_wait(); 
	pros::delay(1000);
	chassis.pid_drive_set(15_in, 15,true); 
	chassis.pid_wait(); 
	
	
	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	chassis.pid_turn_set(-45_deg, TURN_SPEED);
	chassis.pid_wait();
	chassis.pid_drive_set(-14_in, 80,true);
	chassis.pid_wait_quick_chain();
	chassis.pid_drive_set(-9_in, 15,true);
	chassis.pid_wait(); 
	Intake.move_voltage(-12000);
	Top_Scorer.move_voltage(12000);
	*/

}

void JoyceSkills(){

	chassis.slew_drive_constants_forward_set(5_in, 50);
	chassis.slew_drive_constants_backward_set(5_in, 50);

	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	rake_piston.set_value(false);
	door_piston.set_value(false);
	chassis.pid_drive_set(23.5_in, 75,true); 
	chassis.pid_wait();
	//Move forward towards Match loader (#1)

	rake_piston.set_value(true);
	chassis.pid_turn_relative_set(90_deg, 80);
	//chassis.pid_turn_set(90_deg, TURN_SPEED);
	chassis.pid_wait();	
	Intake.move_voltage(11000);
	Top_Scorer.move_voltage(11000);
	//Put rake down and turn to face matchloader (#1)

	chassis.pid_drive_set(12.5_in, 40,true);
	chassis.pid_wait(); 
	pros::delay(2100);
	//drive into match loader (#1)

	chassis.pid_turn_relative_set(5,30);
	chassis.pid_wait();
	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	rake_piston.set_value(false);
	//slight curve to align with long goal


	chassis.pid_drive_set(-12_in, 80);
	chassis.pid_wait_quick_chain();
	door_piston.set_value(true);
	Intake.move_voltage(12000);
	Top_Scorer.move_voltage(12000);
	pros::delay(3000);
	//Back up and score into long goal

	chassis.pid_drive_set(5_in, 90);
	chassis.pid_wait_quick();
	door_piston.set_value(false);
	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	chassis.pid_drive_set(8_in, DRIVE_SPEED,true);
	chassis.pid_wait();
	//Back away from long goal

	chassis.pid_turn_set(225_deg, TURN_SPEED);
	chassis.pid_wait();
	Intake.move_voltage(9000);
	Top_Scorer.move_voltage(9000);
	//Turn to face middle goal

	chassis.pid_drive_set(20_in, 80,true); 
	chassis.pid_wait_quick_chain();
	chassis.pid_drive_set(11_in, 15,true); 
	chassis.pid_wait();
	pros::delay(1500);
	chassis.pid_drive_set(11_in, 15,true); 
	chassis.pid_wait(); 
	pros::delay(1000);
	chassis.pid_drive_set(10_in, 15,true); 
	chassis.pid_wait(); 
	Intake.move_voltage(-9000);
	Top_Scorer.move_voltage(-9000);
	pros::delay(2500);
	//Score in middle bottom goal

	chassis.pid_drive_set(-20_in, 80,true); 
	chassis.pid_wait(); 
	//Back away from middle bottom goal

	chassis.pid_turn_set(270_deg, TURN_SPEED);
	chassis.pid_wait();
	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	//Turn to face opposite side matchloader(#2)

	chassis.pid_drive_set(60_in, 90,true); 
	chassis.pid_wait();
	//Drive towards opposite side

	chassis.pid_turn_set(0_deg, TURN_SPEED);
	chassis.pid_wait();
	chassis.pid_drive_set(15_in, 90,true); 
	chassis.pid_wait(); 

	rake_piston.set_value(true);
	chassis.pid_turn_relative_set(-90_deg, 80);
	//chassis.pid_turn_set(90_deg, TURN_SPEED);
	chassis.pid_wait();	
	Intake.move_voltage(11000);
	Top_Scorer.move_voltage(11000);
	//Put rake down and turn to face matchloader (#2)

	chassis.pid_drive_set(12.5_in, 40,true);
	chassis.pid_wait(); 
	pros::delay(2100);
	//drive into match loader (#2)

	chassis.pid_turn_relative_set(5,30);
	chassis.pid_wait();
	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	rake_piston.set_value(false);
	//slight curve to align with long goal

	chassis.pid_drive_set(-12_in, 80);
	chassis.pid_wait_quick_chain();
	door_piston.set_value(true);
	Intake.move_voltage(12000);
	Top_Scorer.move_voltage(12000);
	pros::delay(3000);
	//Back up and score into long goal

	chassis.pid_drive_set(5_in, 90);
	chassis.pid_wait_quick();
	door_piston.set_value(false);
	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);
	chassis.pid_drive_set(8_in, DRIVE_SPEED,true);
	chassis.pid_wait();
	//Back away from long goal


	chassis.pid_turn_set(-225_deg, TURN_SPEED);
	chassis.pid_wait();
	Intake.move_voltage(9000);
	Top_Scorer.move_voltage(9000);
	//Turn to face middle top goal

	chassis.pid_drive_set(20_in, 80,true); 
	chassis.pid_wait_quick_chain();
	chassis.pid_drive_set(11_in, 15,true); 
	chassis.pid_wait();
	pros::delay(1500);
	chassis.pid_drive_set(10_in, 12,true); 
	chassis.pid_wait(); 
	pros::delay(1000);
	chassis.pid_drive_set(10_in, 15,true); 
	chassis.pid_wait(); 
	Intake.move_voltage(9000);
	Top_Scorer.move_voltage(-9000);
	pros::delay(2500);
	//Score in Middle Top goal

	Intake.move_voltage(0);
	Top_Scorer.move_voltage(0);

	/*
	chassis.pid_drive_set(5_in, 80);
	chassis.pid_turn_set(-45_deg, TURN_SPEED);
	chassis.pid_wait();
	chassis.pid_drive_set(-14_in, 80,true);
	chassis.pid_wait_quick_chain();
	chassis.pid_drive_set(-9_in, 15,true);
	chassis.pid_wait();
	Intake.move_voltage(-10000);
	Top_Scorer.move_voltage(10000);
	*/

}


void AutonSkills(){

  
  chassis.pid_odom_set({{9_in, 25_in}, fwd, 50}, true);
  Top_Scorer.move_voltage(12000);
  Intake.move_voltage(12000);
  chassis.pid_wait_until(9);
  chassis.pid_speed_max_set(60);

  chassis.pid_wait();


  // door_piston.set_value(true);
  chassis.pid_drive_set(11_in, 80);
  chassis.pid_wait_quick();
  //Move towards first cluster


  pros::delay(600);

  chassis.pid_drive_set(-10.5_in, 80);
  chassis.pid_wait_quick();
  //Backup to line up with bottom middle goal

  chassis.pid_turn_set(-45_deg, TURN_SPEED);
  chassis.pid_wait();
  //turn to face bottom middle goal

  chassis.pid_drive_set(17.5_in, 70);
  Top_Scorer.move_voltage(-12000);
  Intake.move_voltage(-12000);
  chassis.pid_wait_quick();
  //Move forward and score in bottom middle goal

  chassis.pid_drive_set(-1.5_in, 80);
  chassis.pid_wait_quick();
  pros::delay(1000);

  Top_Scorer.move_voltage(12000);
  Intake.move_voltage(12000);

  chassis.pid_drive_set(-50_in, 70);
  chassis.pid_wait();
  rake_piston.set_value(true);
  //drive to align to RS matchload

  chassis.pid_turn_set(183.5_deg, TURN_SPEED);
  chassis.pid_wait();

  //turn heading to align with RS matchload

  chassis.pid_drive_set(65_in, 60);
  pros::delay(2500);
  //drive into the match loader

  chassis.pid_drive_set(-34_in, 50);
  chassis.pid_wait();
  //back away from match loader towards long goal

  door_piston.set_value(true);
  chassis.pid_wait();
  pros::delay(2000);
  rake_piston.set_value(false);
  door_piston.set_value(false);

  //score on long goal
  
  chassis.pid_drive_set(10_in, 50);
  chassis.pid_wait();

  chassis.pid_turn_set(90_deg, TURN_SPEED);
  chassis.pid_wait();


  chassis.pid_drive_set(-21_in, 50); 
  chassis.pid_wait();

  chassis.pid_turn_set(3_deg, TURN_SPEED);
  chassis.pid_wait();

  //driving to align for the back RS cluster 

  chassis.pid_odom_set({{12.5_in, 73.5_in}, fwd, 40}, true); 
  chassis.pid_wait();
  //picked up back RS cluster 

  chassis.pid_turn_set(45_deg, TURN_SPEED); 
  chassis.pid_wait();

  chassis.pid_drive_set(-16, 70);
  chassis.pid_wait();
  //scored middle top goal 

  chassis.pid_drive_set(55.5, 70);
  chassis.pid_wait();
  rake_piston.set_value(true);
  pros::delay(500);
  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();
  //aligned with back RS matchloader

  chassis.pid_drive_set(9, 70);
  chassis.pid_wait();
  //matchload back RS matchloader 

  pros::delay(2500);
  chassis.pid_drive_set(-34.5, 50);
  chassis.pid_wait();
  //align with long goal 

  rake_piston.set_value(false);
  chassis.pid_wait();
  door_piston.set_value(true);
  pros::delay(2500);

//def needs tuning after this
  chassis.pid_drive_set(10, 70);
  chassis.pid_wait();

  chassis.pid_turn_set(-90_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(62, 70);
  chassis.pid_wait();
  


}

void RightAuto(){


  chassis.slew_drive_set(false);  // Disables global slew
  chassis.slew_drive_constants_set(5_in, 50);

  Top_Scorer.move_voltage(12000);
  Intake.move_voltage(12000);
  //Start Ball Subsystems


  chassis.pid_turn_relative_set(25_deg, TURN_SPEED);
  chassis.pid_wait();
  //Turn to align towards first Cluster

  chassis.pid_drive_set(15_in, 90, true);
  chassis.pid_wait_quick();
  //Drive to first clusters

  chassis.pid_turn_relative_set(-80_deg,TURN_SPEED);
  chassis.pid_wait();
  //Turn to align towards Matchloader

  chassis.pid_drive_set(-17.5_in,DRIVE_SPEED);
  chassis.pid_wait_quick();
  //Backup towards Matchloader

  chassis.pid_turn_relative_set(-125_deg, TURN_SPEED);
  chassis.pid_wait();
  //Turn to align front facing match loader

  rake_piston.set_value(true);
  pros::delay(500);


  chassis.pid_drive_set(9_in, 50);
  chassis.pid_wait_quick();
  chassis.pid_drive_set(5.5_in, 30);
  chassis.pid_wait_quick();
  pros::delay(2000);
  //drive into the match loader


  chassis.pid_drive_set(-17_in, 50);
  chassis.pid_wait_quick();
  //back away from match loader towards long goal

  door_piston.set_value(true);
  pros::delay(1500);

  
  chassis.pid_drive_set(7_in, 90);
  chassis.pid_wait_quick();
  door_piston.set_value(false);
  chassis.pid_drive_set(-8_in, 110);
  chassis.pid_wait_quick();


}




void drivestraight (float dist, float heading, float speedmv, float d_kp, float d_ki, float d_kd, float t_kp, float t_ki, float t_kd){


	float drivePID;
	float turnPID;
	float sumPID;
	float tickRev = (2.75 *3.14) / 360;
	float in_ticks = dist / tickRev;
	float dist_target = vert_Track.get_position()+in_ticks;
	float turn_target = heading;

	float disterror = dist_target - vert_Track.get_position();
	float turnerror = turn_target - inertial.get_heading();



	while (dist_target > vert_Track.get_position()){

		drivePID = (disterror) * d_kp;
		turnPID = turnerror * t_kp;

		drivePID = drivePID * 0.75;
		turnPID = turnPID * 0.75;

		if (drivePID > speedmv){
			drivePID = speedmv;
		}
		
		sumPID = drivePID + turnPID;

		

		left_mg.move_voltage(sumPID);
		right_mg.move_voltage(sumPID);

		

		disterror = dist_target - vert_Track.get_position();
		turnerror = turn_target - inertial.get_heading();


	}

	left_mg.move_voltage(0);
	right_mg.move_voltage(0);
	



}


double PID(float kp, float ki, float kd){

	double FinalPID;





	return FinalPID;
}