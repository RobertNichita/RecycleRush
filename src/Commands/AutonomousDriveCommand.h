#ifndef AutonomousDriveCommand_H
#define AutonomousDriveCommand_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutonomousDriveCommand: public CommandBase
{
public:

	Timer* timer;
	float speed,turn;
	double timed;

	AutonomousDriveCommand(float drive, float turn, double timed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
