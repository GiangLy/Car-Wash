#include "queue.hpp"
#include <iostream>
using namespace std;

//Default constructor zeros out data and NULLS out pointers.
Queue::Queue()
{
   front = rear = NULL;
   count = 0;
}

//Check if the queue is empty or not.
bool Queue::is_empty()
{
   if (front == NULL)
   {
	   return true;
   }
   return false;
}

//add item to the rear of the queue
void Queue::enqueue(int num, char sz, int arrive)
{
   // Create a new node
   Node* ptr = new Node(num, sz, arrive);

   if (is_empty())
   {
      front = rear = ptr;
   }
   else
   {
      // Append to the list
      rear->set_link(ptr);
      rear = ptr;
   }
   count++;
}


//Create a temporary pointer and then delete the front node.
bool Queue::dequeue()
{
   if (is_empty())
   {
      cout << "Queue underflow error";
      return false;
   }
   Node* ptr = front;
   // Move the front pointer to next node
	  front = front->get_link();
   if (front == NULL)
   {
	   rear = NULL;
   }
   // If the last one is dequeued, rear needs to be NULL also.
   count--;
   // Free memory
   delete ptr;
   return true;
}

//Accessor to return the front car's number
int Queue::front_number()
{          
    return front->get_number();
}

//Accessor to return the rear car's number
int Queue::rear_number()
{
	return rear->get_number();
}

//Accessor to return the front car's size
char Queue::front_size()
{          
    return front->get_size();
}

//Accessor to return the rear car's size
char Queue::rear_size()
{
    return rear->get_size();
}

//Accessor to return the rear car's arrival time
int Queue::front_arrival()
{     
	return front->get_arrival_time();
}
 
//Accessor to return the rear car's arrival time
int Queue::rear_arrival()
{
	return rear->get_arrival_time();
}
