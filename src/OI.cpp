#include "OI.h"

OI::OI()
{
	JoystickDrive = new Joystick(1);
	JoystickOperator = new Joystick(2);
	JoystickButtonADrive = new JoystickButton(JoystickDrive,1);
	JoystickButtonBDrive = new JoystickButton(JoystickDrive,2);



}
