/*
Function: Bay_type
Constructor: defaults time limit and timer to 0. status to a
Inputs: None
Outputs: None data is going to be zeroed
Return: N/A
	Zero out time limit and timer. Make status 'a'.

Function: Bay_type
Constructor: takes in time limit 20 for large 12 for small.
Inputs: tl
Outputs: None
Return: N/A
	Zero out time limit and set status to 'a'. takes in time limit from
	user.

Function: set_timer
Description: mutator function to set the timer.
Inputs: tr
Outputs: None
Returns: None

Function: get_timer
Description: Accessor function to get the timer for that Bay Type.
Inputs: None
Output: None
Return: timer

Function: get_time_limit
Description: Accessor function to get the time limit for that Bay Type
Input: None
Output: None
Return: time_limit

Function: get_status
Description: Accessor function to get status of that Bay Type
Inputs: None
Outputs: None
Return: status

Function: set_status
Description: Mutator function to set the status of that Bay Type
Inputs: stat
Outputs: None
Return: None
*/

#ifndef __BAY__
#define __BAY__
class Bay_type
{
	//Declare class variables *Private
	int timer;
	char status;		// ‘a’  - available, ‘i’ – inactive
	int time_limit;		// 12 for small cars, 20 for larger cars
	
	//Public allows access to data
	public:
		//default constructor. Set all values to zero or default.
		Bay_type()
		{
			timer = 0;
			time_limit = 0;
			status = 'a';
		}
		Bay_type(int tl);
		void set_timer(int tr);
		int get_timer();
		int get_time_limit();
		char get_status();
		void set_status(char stat);
};
#endif
