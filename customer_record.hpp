/*
Function: Customer_record
Constructor: defaults number and arrival_time to 0. Size to ' '
Inputs: None
Outputs: None data is going to be zeroed
Return: N/A
	Zero out number and arrival_time. Make size to ' '.

Function: set_number
Description: Mutator function to set car number
Inputs: num
Outputs: None
Returns: None

Function: set_size
Description: Mutator function to set size of car
Inputs: sz
Output: None
Return: None

Function: set_arrival_time
Description: Mutator function to set arrival time
Input: arrive
Output: None
Return: None

Function: get_number
Description: Accessor function to get number of car.
Inputs: None
Outputs: None
Return: car number

Function: get_size
Description: Accessor function to get size of car.
Inputs: None
Outputs: None
Return: car size

Function: get_arrival_time
Description: Accessor function to get arrival time of car.
Inputs: None
Outputs: None
Return: car arrival time
*/
#ifndef __CUSTOMER__
#define __CUSTOMER__
class Customer_record
{
	int number;
	char size;		// “L” for large, “S” for small
	int arrival_time;
	public:
		Customer_record()
		{
			number = 0;
			size = ' ';
			arrival_time = 0;
		}
		void set_number(int num);
		void set_size(char sz);
		void set_arrival_time(int arrive);
		int get_number();
		char get_size();
		int get_arrival_time();
};
#endif
