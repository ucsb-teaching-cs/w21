struct Node {
	Node *next;
	int val;
};

class Queue
{
	Node *head, *tail;
public:
	Queue();
	~Queue();

	void	push	(int val);
	int		pop		();
	void	clear	();

	friend std::ostream& operator <<(std::ostream& s, const Queue& q);
};