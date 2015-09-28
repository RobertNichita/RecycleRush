#include "AutonomousDriveCommand.h"


AutonomousDriveCommand::AutonomousDriveCommand(float speed, float turn, double timed)
{
	Requires (drivesubsystem);
	timer = new Timer();
	this->turn = turn;
	this->speed = speed;
	this->timed = timed;

}

// Called just before this Command runs the first time
void AutonomousDriveCommand::Initialize()
{
	timer->Stop();
	timer->Reset();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousDriveCommand::Execute()
{
	  if (timer->Get() == 0)
	  timer->Start();
	  drivesubsystem->arcadeDrive(speed,turn);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousDriveCommand::IsFinished()
{
	return timer->HasPeriodPassed(timed);
}

// Called once after isFinished returns true
void AutonomousDriveCommand::End()
{
	drivesubsystem->arcadeDrive(0,0);
	timer->Stop();
	timer->Reset();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousDriveCommand::Interrupted()
{
	timer->Stop();
	timer->Reset();
}
