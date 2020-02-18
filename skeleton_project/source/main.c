#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "queue.h"

static void clear_all_order_lights(){
    HardwareOrder order_types[3] = {
        HARDWARE_ORDER_UP,
        HARDWARE_ORDER_INSIDE,
        HARDWARE_ORDER_DOWN
    };

    for(int f = 0; f < HARDWARE_NUMBER_OF_FLOORS; f++){
        for(int i = 0; i < 3; i++){
            HardwareOrder type = order_types[i];
            hardware_command_order_light(f, type, 0);
        }
    }
}

static void sigint_handler(int sig){
    (void)(sig);
    printf("Terminating elevator\n");
    hardware_command_movement(HARDWARE_MOVEMENT_STOP);
    exit(0);
}

int main(){
    int error = hardware_init();
    if(error != 0){
        fprintf(stderr, "Unable to initialize hardware\n");
        exit(1);
    }
    typedef enum {
        IDLE,
        IDLE_door_open,
        Going_up,
        Going_down,
        Order_exp
    }States;
    States currentState;
    clear_all_order_lights();
    vector q;
    HardwareMovement currentMovement;
    int currentFloor;


    switch (currentState)
    {
    case IDLE:{//kode for IDLE}
        break;
    case IDLE_door_open:{//kode for IDLE_door_open}
        break;
    case Going_down:{//kode for going down}
        break;
    case Going_up:{//kode for going up}
        break;
    case Order_exp:{//order expedition procedure}
        break;

    }

    


 

    return 0;
}
