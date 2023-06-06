#include <iostream>
#include "queue.h"

int main() {
	
	Queue<int> q1(10);

	for (int i = 0; i < 10; i++) {
		q1.Enqueue(i);
	}

	for (int i = 0; i < 10; i++) {
		std::printf("%d\n", q1.Dequeue());
	}

	return 0;
}