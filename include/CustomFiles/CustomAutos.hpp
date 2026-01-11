#pragma once

#include "pros/motors.hpp"
#include "EZ-Template/api.hpp"

//void joyce_left(pros::Motor bottomMotor, pros::Motor upperMotor, ez::Piston rake_piston, ez::Piston upper_piston);

//void joyce_right(pros::Motor bottomMotor, pros::Motor upperMotor, ez::Piston rake_piston, ez::Piston upper_piston);

//void joyce_skills(pros::Motor bottomMotor, pros::Motor upperMotor, ez::Piston rake_piston, ez::Piston upper_piston);

void JoyceRight();
void JoyceLeft();
void JoyceSkills();

void AutonSkills();
void RightAuto();

double PID(float kp, float ki, float kd);

void drivestraight (float dist, float speedmv, float kp, float ki, float kd);