/*
Function: Sim-data
Constructor: defaults time_cnt, num_serviced, tot_wait_time, and
num_turned_away to 0.
Inputs: None
Outputs: None data is going to be zeroed
Return: None

Function: set_time
Description: Mutator function to set the time during work hours
Inputs: minutes
Outputs: None
Returns: None

Function: set_num_serviced
Description: Mutator function to set the number of cars washed.
Inputs: served
Output: None
Return: None

Function: set_num_turned_away
Description: Mutator function to set the number of cars sent away.
Input: turnt
Output: None
Return: None

Function: set_tot_wait_time
Description: Mutator function to set the time car waits in queue.
Inputs: wt
Outputs: None
Return: None

Function: get_time
Description: Accessor function to get the time during work hours
Inputs: minutes
Outputs: None
Returns: time_cnt

Function: get_num_serviced
Description: Accessor function to get the number of cars washed.
Inputs: served
Output: None
Return: num_serviced

Function: get_num_turned_away
Description: Accessor function to get the number of cars sent away.
Input: turnt
Output: None
Return: num_turned_away

Function: get_tot_wait_time
Description: Accessor function to get the time car waits in queue.
Inputs: wt
Outputs: None
Return: tot_wait_time

*/
#ifndef __SIMDATA__
#define __SIMDATA__
class  Sim_data
{
	int time_cnt;		// ranges in values from 0 to 570
	int num_serviced;	// number of vehicles washed so far
	long tot_wait_time;	// of all vehicles in the queue
	int num_turned_away;	// count of vehicles turned away
	public:
		Sim_data()
		{
			time_cnt = 0;
			num_serviced = 0;
			tot_wait_time = 0;
			num_turned_away = 0;
		}
		void set_time(int minutes);
		int get_time();
		void set_num_serviced(int served);
		int get_num_serviced();
		void set_num_turned_away(int turnt);
		int get_num_turned_away();
		void set_tot_wait_time(long wt);
		long get_tot_wait_time();
};
#endif
