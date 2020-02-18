#include <stdio.h>
#include <stdlib.h>
#include "queue.h"




void add_order(vector* q,order o) {
	vector_add(&q, o);
}

int check_queue(vector*	q){
	if (vector_count(&q) == 0) {
		return 0;
	}
	else {
		return 1;
	}
}


order return_order(vector* q) {
	r = vector_get(&q, 0);
	return r;
}

int check_order(vector* q, int floor, HardwareMovement dir ) {
	for (int i = 0; i < HARDWARE_NUMBER_OF_FLOORS;i++) {
		order o;
		int elevDirection = dir;
		o = vector_get(&q, i);
		int orderDirection = o.orderType;

		if ((o.floor == floor)) {
			if ((elevDirection == orderDirecton) || (orderDirection == 1)) {
				return 1;
			}
		}

	}
	return 0;
}

