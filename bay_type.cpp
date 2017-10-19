#include "bay_type.hpp"

//Default constructor takes in time limit for bay type
Bay_type::Bay_type(int tl)
{
	timer = 0;
	status = 'a';
	time_limit = tl;
}

//Sets the timer
void Bay_type::set_timer(int tr)
{
	timer = tr;
}

//Returns the timer
int Bay_type::get_timer()
{
	return timer;
}

//Returns the time limit.
int Bay_type::get_time_limit()
{
	return time_limit;
}

//Returns the status
char Bay_type::get_status()
{
	return status;
}

//Sets the status
void Bay_type::set_status(char stat)
{
	status = stat;
}
