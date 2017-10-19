#include "stack.hpp"
#include <iostream>
#include "Node.hpp"

// Create the Stack. Default constructor.
Stack::Stack()
{
   count = 0;
   top = NULL;
}

//Returns the number of entries in the stack.
int Stack::get_count()
{
	return count;
}

// Insert a node(entry) in the stack.
bool Stack::push(int rem)
{
   // Create a new node with a NULL ptr.
   Node *node_ptr = new Node(rem);
   
   // If there are no entries in the stack,
   // add it to the top of stack.
   if (top == NULL)
   {
      top = node_ptr;
      count ++;
   }
   else
   // If there is a top entry set new node to point to top node.
   // Set new node as top pointer.
   {
	   node_ptr->set_link(top);
	   top = node_ptr;
	   count ++;
   }
   return true;
}

//delete top node in stack.
bool Stack::pop()
{
   Node *curr;
   
   //If stack is empty then error out.
   if (count < 1)
   {
	   std::cout << "Stack is currently empty";
	   return 0;
   }
   else
   {
       // Set temporary for top pointer
       // Set the top to the next node.
       // Delete the temporary node ie. previous top node.
       // Reduce number of entries by 1.
       curr = top;
       top = curr->get_link();
       delete curr;
       count --;
       return 1;
   }
}

//Returns the top node without modifying the data.
int Stack::stack_top()
{
	//Check if stack is empty or not to avoid underflow.
	if (top != NULL)
	{
	    return top->get_remainder();
	}
	else
	{
		std::cout << "Stack is empty.";
		return 0;
	}
}

//Checks to see if Stack is empty or not.
bool Stack::empty()
{
	if (top != NULL)
	    return false;
	else
	    return true;
}
