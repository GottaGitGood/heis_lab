/**
 * @file
 * @brief implementation of queue for orders
**/
#include"vector.h"
#include "hardware.h"
/**
* @brief Struct containing an order
**/
struct order {
    HardwareOrder orderType;
    int floor;
};

/**
* @brief function adding an order to the queue
**/
void add_order(vector q, struct order *o);

/**
* @brief function checking if queue is empty
**/
int check_queue(vector q);

/**
* @brief function returning first order in queue
**/
struct order return_order(vector q);


/**
* @brief function checking if there is reason to stop at current floor
**/
int check_order(vector q, int floor, HardwareMovement dir);

