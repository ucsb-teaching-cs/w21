#include <iostream>

#include "queue.h"

Queue::Queue()
{
	this->head = this->tail = nullptr;
}

Queue::~Queue()
{
	this->clear();
}

void Queue::push(int val)
{
	Node *p = new Node();
	*p = {0, val};

	if (this->tail == nullptr)
		this->head = this->tail = p;
	else
		this->tail = this->tail->next = p;
}

int Queue::pop()
{
	Node *p = this->head;
	if (p == nullptr) return -1;

	this->head = p->next;
	int out = p->val;
	
	delete p;
	return out;
}

void Queue::clear()
{
	Node *p;
	while(this->head)
	{
		p = this->head;
		this->head = p->next;
		delete p;
	}
}

std::ostream& operator <<(std::ostream& os, const Queue& q)
{
	os << "Queue contains:\n";
	for(Node *p = q.head; p; p = p->next)
		os << p->val << " ";
	os << std::endl;
	return os;
}