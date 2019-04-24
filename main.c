#include <kipr/botball.h> 
#define LEFT_MOTOR_PORT 2
//Defines port for left motor works the same as the defines for servo ports
#define RIGHT_MOTOR_PORT 0
//defines the port for the right motor
#define FORWARD_SPEED 20
//set forward speed for wheels makes motion consistent
#define TURN_SPEED 5
//set the speed for the wheel on side that we are turning towards
#define SLOW_SPEED 10
//set speed for slowing down
#define BACKWARD_SPEED -20
//set the speed for backward motion for, consistency?

void drive(int left, int right);
void slow_servo(int port, int target);

int main(){
    //wait_for_light(3); //starts robot when light is on
    shut_down_in(119); //shuts down in 2 minutes
    enable_servos();
    camera_open();
    camera_update(); //takes pictures
    int pokeBlocks = 0;

        
    drive(FORWARD_SPEED, FORWARD_SPEED);
    msleep(27000);
    drive(0,SLOW_SPEED);
    msleep(11000);
    drive(0,0);
	pokeBlocks = 1;
     
    
    while(pokeBlocks){
        motor(1,500);
    }
    return 0;
}

void drive(int left, int right){

    motor(LEFT_MOTOR_PORT, left);
    motor(RIGHT_MOTOR_PORT, right);
}
