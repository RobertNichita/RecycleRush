#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
Joystick* JoystickDrive;
Joystick* JoystickOperator;
JoystickButton* JoystickButtonADrive;
JoystickButton* JoystickButtonBDrive;
public:
	OI();
	  inline float drive()
	  {
		  	 //I forgot how this part works, adding dead zones to the controllers and receiving input from the joystick
	  }

	  /** Retrieves the left/right value for the drive */
	  inline float turn()
	  {

	  }
};

#endif
