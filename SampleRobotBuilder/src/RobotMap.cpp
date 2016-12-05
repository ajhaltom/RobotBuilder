// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::driveSubsystemleftFront;
std::shared_ptr<SpeedController> RobotMap::driveSubsystemleftRear;
std::shared_ptr<SpeedController> RobotMap::driveSubsystemrightFront;
std::shared_ptr<SpeedController> RobotMap::driveSubsystemrightRear;
std::shared_ptr<RobotDrive> RobotMap::driveSubsystemRobotDrive;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveSubsystemleftFront.reset(new VictorSP(0));
    lw->AddActuator("DriveSubsystem", "leftFront", std::static_pointer_cast<VictorSP>(driveSubsystemleftFront));
    
    driveSubsystemleftRear.reset(new VictorSP(1));
    lw->AddActuator("DriveSubsystem", "leftRear", std::static_pointer_cast<VictorSP>(driveSubsystemleftRear));
    
    driveSubsystemrightFront.reset(new VictorSP(2));
    lw->AddActuator("DriveSubsystem", "rightFront", std::static_pointer_cast<VictorSP>(driveSubsystemrightFront));
    
    driveSubsystemrightRear.reset(new VictorSP(3));
    lw->AddActuator("DriveSubsystem", "rightRear", std::static_pointer_cast<VictorSP>(driveSubsystemrightRear));
    
    driveSubsystemRobotDrive.reset(new RobotDrive(driveSubsystemleftFront, driveSubsystemleftRear,
              driveSubsystemrightFront, driveSubsystemrightRear));
    
    driveSubsystemRobotDrive->SetSafetyEnabled(false);
        driveSubsystemRobotDrive->SetExpiration(0.1);
        driveSubsystemRobotDrive->SetSensitivity(0.5);
        driveSubsystemRobotDrive->SetMaxOutput(1.0);
        driveSubsystemRobotDrive->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);
        driveSubsystemRobotDrive->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
        driveSubsystemRobotDrive->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
        driveSubsystemRobotDrive->SetInvertedMotor(RobotDrive::kRearRightMotor, true);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
