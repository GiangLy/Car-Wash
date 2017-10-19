#include "node.hpp"

// Default constructor
Node :: Node(int num, char sz, int arrive)
{
	number = num;
	size = sz;
	arrival_time = arrive;
	link = NULL;
}

//Mutator function to set link pointer of current node.
void Node :: set_link(Node *ptr)
{
	link = ptr;
}


//Accessor function to get link pointer of current node.
Node* Node :: get_link()
{
	return link;
}

//Accessor Function to get the number of current car.
int Node :: get_number()
{
	return number;
}

//Accessor Function to get the size of current car.
char Node :: get_size()
{
	return size;
}

//Accessor Function to get the arrival time of current car.
int Node :: get_arrival_time()
{
	return arrival_time;
}
	
