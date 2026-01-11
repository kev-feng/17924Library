#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "pros/motors.hpp"
#include "pros/adi.hpp"
#include "pros/rotation.hpp"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup left_mg({-1, -2, -3}, pros::MotorGears::blue);    // Creates a motor group with forwards ports 1 & 3 and reversed port 2
inline pros::MotorGroup right_mg({4, 5, 6}, pros::MotorGears::blue);  // Creates a motor group with forwards port 5 and reversed ports 4 & 6


inline pros::Motor Top_Scorer(-18);
inline pros::Motor Intake(-20);

inline pros::ADIDigitalOut rake_piston('B');
inline pros::ADIDigitalOut door_piston('G');

inline pros::Rotation vert_Track(1);

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');