#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "pros/imu.hpp"
#include "pros/motors.hpp"
#include "pros/adi.hpp"
#include "pros/rotation.hpp"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup left_mg({-11, -9, -4}, pros::MotorGears::blue);    // Creates a motor group with forwards ports 1 & 3 and reversed port 2
inline pros::MotorGroup right_mg({8, 18, 20}, pros::MotorGears::blue);  // Creates a motor group with forwards port 5 and reversed ports 4 & 6


inline pros::Motor Top_Scorer(19);
inline pros::Motor Intake(12);

inline pros::ADIDigitalOut rake_piston('B');
inline pros::ADIDigitalOut door_piston('G');

inline pros::Rotation vert_Track(14);
inline pros::IMU inertial(13);

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');