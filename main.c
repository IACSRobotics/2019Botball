#include <kipr/botball.h>
#define CLAW_CLOSE 1650	// sets number used for closing the claw, that way we know what it is.
#define CLAW_OPEN 881	// sets number used for opening the claw, that way we know what it is.
#define ARM_UP 133	// sets number used for raising the arm, that way we know what it is.
#define ARM_DOWN 1279	// sets number used for lowering the arm, that way we know what it is.
#define ARM_PORT 1	//defines the port used by the servo for the arm, use this to control that servo
	//if we need to change the number we only need to change it here
#define CLAW_PORT 0		// same as the define for the arm's port, just for the claw
#define LEFT_MOTOR 0	//Defines port for left motor works the same as the defines for servo ports
#define RIGHT_MOTOR 2	//defines the port for the right motor

int main()
{
	printf("Hello, World!\n");
	return 0;
    enable_servos();
    set_servo_position(ARM_PORT,ARM_UP);
    msleep(1000);
    set_servo_position(CLAW_PORT,CLAW_OPEN);
    motor(LEFT_MOTOR,50);
    motor(RIGHT_MOTOR,50);
    msleep(1000);
    msleep(100);
    set_servo_position(ARM_PORT,ARM_DOWN);
    msleep(1000);
    set_servo_position(CLAW_PORT,CLAW_CLOSE);
    msleep(1000);
    set_servo_position(ARM_PORT,ARM_UP);
    msleep(1000);
    motor(LEFT_MOTOR,-10);
    motor(RIGHT_MOTOR, 10);
    msleep(10000);
    motor(LEFT_MOTOR,50);
    motor(RIGHT_MOTOR,50);
    msleep(1000);
    set_servo_position(CLAW_PORT,CLAW_OPEN);
    return 0;
}
