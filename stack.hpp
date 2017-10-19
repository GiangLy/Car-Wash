/*
Function: Stack
Constructor: defaults count to 0, Head NULL.
Inputs: None
Outputs: None data is going to be zeroed
Return: N/A
	Zero out data and create a stack

Function: get_count
Desctiption: get the number of items in the list.
Inputs: None
Outputs: None
Returns: count

Function: push
Description: adds item to top of stack
Inputs: rem
Outputs: None
Return: None

Function: pop
Description: deletes top item from stack
Inputs: None
Outputs: None
Return: None

Function: stack_top
Description: Returns the top item in the stack without modifying stack.
Inputs: None
Outputs: None
Return: remainder
 
Function: empty
Description: returns true if stack is empty, false if not empty
Inputs: None
Outputs: None
Return: true or false
*/
#include "Node.hpp"


#ifndef __stack__
#define __stack__
class Stack
{
   // Keep track of how many are in stack.
   int count;
   Node *top;
 public:
   //Default constructor
   Stack();
   //Function Prototype
   int get_count();
   bool push(int rem); 
   bool pop ();
   int stack_top();   
   bool empty();
};
#endif
