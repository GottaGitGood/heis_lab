#include <stdio.h>
#include <stdlib.h>
#include "queue.h"






void add_order(vector q,struct order *o) {
	vector* q_p = &q;
	vector_add(q_p, o);
}

int check_queue(vector	q){
	vector* q_p = &q;
	if (vector_count(q_p) == 0) {
		return 0;
	}
	else {
		return 1;
	}
}


struct order return_order(vector q) {
	void* vPtr = vector_get(&q, 0);
	struct order r = *((struct order*)vPtr);
	return r;
}

int check_order(vector q, int floor, HardwareMovement dir ) {
	for (int i = 0; i < HARDWARE_NUMBER_OF_FLOORS;i++) {
		struct order o;
		int elevDirection = dir;
		o = *((struct order*)vector_get(&q,i));
		int orderDirection = o.orderType;

		if ((o.floor == floor)) {
			if ((elevDirection == orderDirection) || (orderDirection == 1)) {
				return 1;
			}
		}

	}
	return 0;
}

