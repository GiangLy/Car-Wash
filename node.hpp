/*
Function: Node
Constructor: defaults remainder to predetermined value.
Make ptr NULL. 
Inputs: None
Outputs: None data is going to be zeroed
Return: N/A
	Zero out remainder

Function: Node
Constructor: Takes in set number to num, size to sz, and arrival_time
to arrive.
Inputs: num,sz,arrive
Outputs: None
Returns: None

Function: get_link
Description: Accessor function to get link.
Inputs: None
Output: None
Return: link

Function: set_link
Description: Mutator function to set link.
Input: *ptr
Output: None
Return: None

Function: get_size
Description: Accessor function to get size of car.
Inputs: None
Outputs: None
Return: size

Function: get_number
Description: Accessor function to get number of car.
Inputs: None
Outputs: None
Return: number

Function: get_arrival_time
Description: Accessor function to get arrival time of car.
Inputs: None
Outputs: None
Return: arrival_time
*/
#include <string>

#ifndef __NODE__
#define __NODE__
class Node
{
	//Declare class variables *Private
	int number;		//Number of the customer
	char size;		// “L” for large, “S” for small
	int arrival_time; //arrival time of the customer
	Node *link;
	
	//Public allows access to data
	public:
        //default constructor
		Node()
		{
			number = 0;
			size = ' ';
			arrival_time = 0;
			link = NULL;
		}
	    Node (int num, char sz, int arrive);
        //Function Prototypes
		void set_link(Node *ptr);
		Node* get_link();
		char get_size();
		int get_number();
		int get_arrival_time();
};
#endif
