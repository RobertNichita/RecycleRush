#include "DriveSubsystem.h"
#include "../RobotMap.h"

DriveSubsystem::DriveSubsystem() :
		Subsystem("ExampleSubsystem"), L1(LEFT1),L2(LEFT2),R1(RIGHT1),R2(RIGHT2)
{

}

void DriveSubsystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void DriveSubsystem::tankDrive(float left,float right)
{
	L1.Set(left);
	L2.Set(left);
	R1.Set(right);
	R2.Set(right);
}

void DriveSubsystem::arcadeDrive(float speed, float turn)
{
	tankDrive((-turn) - speed, (-turn) + speed);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
