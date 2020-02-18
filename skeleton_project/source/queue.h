#include"vector.h"
#include "hardware.h"

struct order {
    HardwareOrder orderType;
    int floor;
};


void add_order(vector* q, order o);
int check_queue(vector* q);

order return_order(vector* q);

int check_order(vector* q, int floor, HardwareMovement dir);

