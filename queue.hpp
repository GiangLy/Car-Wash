/*
Function: Queue
Constructor: defaults Front and Rear to NULL. Count to 0
Inputs: None
Outputs: None data is going to be zeroed
Return: N/A
	Zero out count. Make front and rear NULL.

Function: is_empty
Description: Checks to see if the queue is empty or not.
Inputs: None
Outputs: None
Returns: True in empty. False if not.

Function: enqueue
Description: Adds node to the rear of the queue.
Inputs: Car number, Car size, Car arrival time.
Output: None
Return: None

Function: dequeue
Description: Removes the node at the front of the queue
Input: None
Output: None
Return: True if successful. False if queue is empty.

Function: front_number
Description: Accessor function to get number of front car.
Inputs: None
Outputs: None
Return: front car number

Function: front_size
Description: Accessor function to get size of front car.
Inputs: None
Outputs: None
Return: front car size

Function: front_arrival
Description: Accessor function to get arrival time of front car.
Inputs: None
Outputs: None
Return: front car arrival time

Function: rear_number
Description: Accessor function to get number of rear car.
Inputs: None
Outputs: None
Return: rear car number

Function: rear_size
Description: Accessor function to get size of rear car.
Inputs: None
Outputs: None
Return: rear car size

Function: rear_arrival
Description: Accessor function to get arrival time of rear car.
Inputs: None
Outputs: None
Return: rear car arrival time

Function: size
Description: Accessor function to get number items in the queue.
Inputs: None
Outputs: None
Return: size of the queue

*/

#include "node.hpp"

#ifndef __QUEUE__
#define __QUEUE__
class Queue
{
   //Declare class variables *Private
   Node* front;
   Node* rear;
   int count;
   //Public allows access to data
 public:
   Queue();
   bool is_empty(); 
   void enqueue(int num, char sz, int arrive);
   bool dequeue();
   int front_number ();
   char front_size ();
   int front_arrival();
   int rear_number ();
   char rear_size ();
   int rear_arrival();
   int size() { return count; }
};
#endif
