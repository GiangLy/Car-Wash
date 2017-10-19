//Customer Record
#include "customer_record.hpp"

//Mutator function to set the car number
void Customer_record::set_number(int num)
{
	number = num;
}

//Mutator function to set size of car
void Customer_record::set_size(char sz)
{
	size = sz;
}

//Mutator function to set the arrival time.
void Customer_record::set_arrival_time(int arrive)
{
	arrival_time = arrive;
}

//accessor function to get the car number
int Customer_record::get_number()
{
	return number;
}

//accessor function to get size of the car.
char Customer_record::get_size()
{
	return size;
}

//accessor function to get the arrival time of the car
int Customer_record::get_arrival_time()
{
	return arrival_time;
}
