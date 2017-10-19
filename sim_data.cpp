#include "sim_data.hpp"

//Mutator function that sets the time during work hours.
void Sim_data::set_time(int minutes)
{
	time_cnt = minutes;
}

//Accessor function that gets the time during work hours.
int Sim_data::get_time()
{
	return time_cnt;
}

//Mutator function that sets the number of cars washed.
void Sim_data::set_num_serviced(int served)
{
	num_serviced = served;
}

//Accessor function that gets the number of cars washed.
int Sim_data::get_num_serviced()
{
	return num_serviced;
}

//Mutator function to set the number of cars sent away.
void Sim_data::set_num_turned_away(int turnt)
{
	num_turned_away = turnt;
}

//Accessor function to get the number of cars sent away.
int Sim_data::get_num_turned_away()
{
	return num_turned_away;
}

//Mutator function to set the total time a car waited in the queue.
void Sim_data::set_tot_wait_time(long wt)
{
	tot_wait_time = wt;
}

//Accessor function to get the total time a car waited in the queue.
long Sim_data::get_tot_wait_time()
{
	return tot_wait_time;
}

