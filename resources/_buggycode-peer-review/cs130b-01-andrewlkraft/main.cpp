#include <iostream>

#include "queue.h"

int main()
{
	Queue q;
	// push some stuff
	for(int i = 0; i < 10; i++)
		q.push(i);
	std::cout << q;
	
	// pop some stuff
	for(int i = 0; i < 5; i++)
		q.pop();
	std::cout << q;
	
	// clear the queue and then push some stuff
	q.clear();
	for(int i = 0; i < 10; i++)
		q.push(i);
	std::cout << q;
	
	return 0;
}