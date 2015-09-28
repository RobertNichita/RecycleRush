#ifndef DriveSubsystem_H
#define DriveSubsystem_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveSubsystem: public Subsystem
{
private:
	Talon L1,L2,R1,R2;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	DriveSubsystem();
	void InitDefaultCommand();
	void tankDrive(float left,float right);
	void arcadeDrive(float speed,float turn);
};

#endif
