/*
Author: Giang Ly
Student ID: C427R468
Project 1

Description of Problem:
Kleene’s Car Wash is thinking of expanding and wants to do a computer 
simulation of a typical day’s business.  The car wash is currently set 
up such that is has four bays.  The first two bays are small and can 
only service smaller sized cars.  The other two bays are larger and can 
service any size vehicles.  When cars enter the car wash, they are given 
a ticket with a number on it and enter a waiting queue.  They remain 
there if all bays are occupied.  If a large car is at the front of the 
queue and a small bay is open, it can not use the bay and it will stand 
idle until the large car can access a larger bay, and only then can the 
next car, if it is smaller, use this bay.  */


#include <iostream>
#include <fstream>
#include <string>
#include "customer_record.hpp"
#include "queue.hpp"
#include "bay_type.hpp"
#include "node.hpp"
#include "sim_data.hpp"

using namespace std;

int main (void)
{
	int numberofcars,queued=0;
	long avg;
	int num, arrive;
	char sze;
	ofstream ofile;
	
	
	Customer_record curr;
	Sim_data sim;
	Queue qs,ql;
	Bay_type small1(12);
	Bay_type small2(12);
	Bay_type large1(20);
	Bay_type large2(20);
	
	//Attempt to open vehicles.txt
	ifstream infile;
	infile.open("vehicles.txt");
	//Check if file exists, if not then error message.
	if (infile.fail())
	{
		cout << "File not found. Exiting..." << endl;
		return 0;
	}
	infile.close();
	
	
	//Opens vehicle.txt
	infile.open("vehicles.txt");
	
	//gets the number of cars from the first line of file
	infile >> numberofcars;
	sim.set_num_serviced(numberofcars);
	
	//gets data for the first car from file
	infile >> num >> sze >> arrive;
	
	//sets the data into the current car.
	curr.set_number(num);
	curr.set_size(sze);
	curr.set_arrival_time(arrive);
	
	//loops for 570 iterations based on the work hours.
	while (sim.get_time() < 570)
	{
		if (!qs.is_empty() || !ql.is_empty())	//check if any cars in queue
		{
			//checks which queues are empty and which are not.
			
			if (!qs.is_empty() && !ql.is_empty())
			{
				if (qs.front_arrival() < ql.front_arrival())
				//Check if small car is ahead of large car in queue.
				{
					//Checks if any out the bays are available.
					//if any bays are set status to inactive and set timer
					//to 12. Dequeue front car.
					if (small1.get_status() == 'a') 
					{
						small1.set_status('i');
						small1.set_timer(12);
						sim.set_tot_wait_time(sim.get_tot_wait_time() + 
						(sim.get_time() - qs.front_arrival()));
						qs.dequeue();
						cout << (qs.size()+ql.size()) << " cars in queue"
						<< endl;
					}
					else if (small2.get_status() == 'a') 
					{
						small2.set_status('i');
						small2.set_timer(12);
						sim.set_tot_wait_time(sim.get_tot_wait_time() + 
						(sim.get_time() - qs.front_arrival()));
						qs.dequeue();
						cout << (qs.size()+ql.size()) << " cars in queue"
						<< endl;
					}
					else if (large1.get_status() == 'a')
					{
						large1.set_status('i');
						large1.set_timer(12);
						sim.set_tot_wait_time(sim.get_tot_wait_time() + 
						(sim.get_time() - qs.front_arrival()));
						qs.dequeue();
						cout << (qs.size()+ql.size()) << " cars in queue"
						<< endl;
					}
					else if (large2.get_status() == 'a')
					{
						large2.set_status('i');
						large2.set_timer(12);
						sim.set_tot_wait_time(sim.get_tot_wait_time() + 
						(sim.get_time() - qs.front_arrival()));
						qs.dequeue();
						cout << (qs.size()+ql.size()) << " cars in queue"
						<< endl;
					}
				}
				else    //if the large car is ahead of small
					//check if large bays are available.
					//if one is available. Set status of that bay
					//to 'i' and set timer to 20. Dequeue front car.
					if (large1.get_status() == 'a')
					{
						large1.set_status('i');
						large1.set_timer(20);
						sim.set_tot_wait_time(sim.get_tot_wait_time() + 
						(sim.get_time() - ql.front_arrival()));
						ql.dequeue();
						cout << (qs.size()+ql.size()) << " cars in queue"
						<< endl;
					}
					else if (large2.get_status() == 'a')
					{
						large2.set_status('i');
						large2.set_timer(20);
						sim.set_tot_wait_time(sim.get_tot_wait_time() + 
						(sim.get_time() - ql.front_arrival()));
						ql.dequeue();
						cout << (qs.size()+ql.size()) << " cars in queue"
						<< endl;
					}
				}
			}
			//if small car queue is not empty but large car queue is
			else if (!qs.is_empty() && ql.is_empty())
			{
				//Checks if any out the bays are available.
				//if any bays are set status to inactive and set timer
				//to 12. Dequeue front car.
				if (small1.get_status() == 'a') 
				{
					small1.set_status('i');
					small1.set_timer(12);
					sim.set_tot_wait_time(sim.get_tot_wait_time() + 
					(sim.get_time() - qs.front_arrival()));
					qs.dequeue();
					cout << (qs.size()+ql.size()) << " cars in queue"
					<< endl;
				}
				else if (small2.get_status() == 'a') 
				{
					small2.set_status('i');
					small2.set_timer(12);
					sim.set_tot_wait_time(sim.get_tot_wait_time() + 
					(sim.get_time() - qs.front_arrival()));
					qs.dequeue();
					cout << (qs.size()+ql.size()) << " cars in queue"
					<< endl;
				}
				else if (large1.get_status() == 'a')
				{
					large1.set_status('i');
					large1.set_timer(12);
					sim.set_tot_wait_time(sim.get_tot_wait_time() + 
					(sim.get_time() - qs.front_arrival()));
					qs.dequeue();
					cout << (qs.size()+ql.size()) << " cars in queue"
					<< endl;
				}
				else if (large2.get_status() == 'a')
				{
					large2.set_status('i');
					large2.set_timer(12);
					sim.set_tot_wait_time(sim.get_tot_wait_time() + 
					(sim.get_time() - qs.front_arrival()));
					qs.dequeue();
					cout << (qs.size()+ql.size()) << " cars in queue"
					<< endl;
				}
			}
			//if large queue is not empty but small queue is empty.
			else if (qs.is_empty() && !ql.is_empty())
			{
				if (large1.get_status() == 'a')
					{
						large1.set_status('i');
						large1.set_timer(20);
						sim.set_tot_wait_time(sim.get_tot_wait_time() + 
						(sim.get_time() - ql.front_arrival()));
						ql.dequeue();
						cout << (qs.size()+ql.size()) << " cars in queue"
						<< endl;
					}
					else if (large2.get_status() == 'a')
					{
						large2.set_status('i');
						large2.set_timer(20);
						sim.set_tot_wait_time(sim.get_tot_wait_time() + 
						(sim.get_time() - ql.front_arrival()));
						ql.dequeue();
						cout << (qs.size()+ql.size()) << " cars in queue"
						<< endl;
					}
			}

		//If queue is not empty and there are no available spots open
		//add car to queue.	
		if ((!qs.is_empty() || !ql.is_empty()) && numberofcars > 0 && 
		curr.get_arrival_time() == sim.get_time())
		{
			//checks to see if queue is full
			if ((ql.size() + qs.size()) < 12)
			{
				//checks size of car then adds car to their respectable
				//queues.
				if (curr.get_size() == 'S')
				{
					qs.enqueue(curr.get_number(),curr.get_size()
					,curr.get_arrival_time());
					queued++;
				}
				else
				{
					ql.enqueue(curr.get_number(),curr.get_size()
					,curr.get_arrival_time());
					queued++;
				}
				cout << "No available spots. Added car " <<
				curr.get_number() << " to queue." << endl;
				cout << (ql.size() + qs.size()) << 
				" cars in queue" << endl;
				//get next car's data
				infile >> num >> sze >> arrive;
				curr.set_number(num);
				curr.set_size(sze);
				curr.set_arrival_time(arrive);
				numberofcars --;
			}
			else
			{
				//if queue is full move on to next car.
				cout << "Queue is full. Sent Car " << curr.get_number()
				<< " away." << endl;
				infile >> num >> sze >> arrive;
				curr.set_number(num);
				curr.set_size(sze);
				curr.set_arrival_time(arrive);
				numberofcars --;
				sim.set_num_turned_away(sim.get_num_turned_away() + 1);
			}
		}
		
		//if small queue is empty and the current car is small.
		if (qs.is_empty() && numberofcars > 0 && curr.get_arrival_time()
		== sim.get_time() && curr.get_size() == 'S')
		{
			if (small1.get_status() == 'a')
			{
				small1.set_status('i');
				small1.set_timer(12);
			}
			else if (small2.get_status() == 'a')
			{
				small2.set_status('i');
				small2.set_timer(12);
			}
			else if (ql.is_empty() && large1.get_status() == 'a')
			{
				large1.set_status('i');
				large1.set_timer(12);
			}
			else if (ql.is_empty() && large2.get_status() == 'a')
			{
				large2.set_status('i');
				large2.set_timer(12);
			}
			else if ((ql.size() + qs.size()) < 12)
			{
				qs.enqueue(curr.get_number(),curr.get_size(),
				curr.get_arrival_time());
				queued++;
				cout << "No available spots. Added car " <<
				curr.get_number() << " to queue." << endl;
				cout << (ql.size() + qs.size()) << " cars in queue" << endl;
			}
			else
			{
				cout << "Queue is full and no available slots.Sent Car "
				<< curr.get_number() << " away.";
				sim.set_num_turned_away(sim.get_num_turned_away() + 1);
			}
			infile >> num >> sze >> arrive;
			curr.set_number(num);
			curr.set_size(sze);
			curr.set_arrival_time(arrive);
			numberofcars --;
		}
		
		//if large queue is empty and current car is large.
		if (ql.is_empty() && numberofcars > 0 && curr.get_arrival_time()
		== sim.get_time() && curr.get_size() == 'L')
		{
			if (large1.get_status() == 'a')
			{
				large1.set_status('i');
				large1.set_timer(20);
			}
			else if (large2.get_status() == 'a')
			{
				large2.set_status('i');
				large2.set_timer(20);
			}
			else if ((ql.size() + qs.size()) < 12)
			{
				ql.enqueue(curr.get_number(),curr.get_size(),
				curr.get_arrival_time());
				queued++;
				cout << "No available spots. Added car " <<
				curr.get_number() << " to queue." << endl;
				cout << (ql.size() + qs.size()) << " cars in queue" << endl;
			}
			else
			{
				cout << "Queue is full and no available slots.Sent Car "
				<< curr.get_number() << " away.";
				sim.set_num_turned_away(sim.get_num_turned_away() + 1);
			}
			infile >> num >> sze >> arrive;
			curr.set_number(num);
			curr.set_size(sze);
			curr.set_arrival_time(arrive);
			numberofcars --;
		}
	sim.set_time(sim.get_time() + 1);
	//increment time of day and decrease time of a bay if it is in use by
	//one minute
	if (small1.get_timer() > 0)
	{
		small1.set_timer(small1.get_timer() - 1);
		if (small1.get_timer() == 0)
		{
			small1.set_status('a');
		}
	}
	
	if (small2.get_timer() > 0)
	{
		small2.set_timer(small2.get_timer() - 1);
		if (small2.get_timer() == 0)
		{
			small2.set_status('a');
		}
	}
	
	if (large1.get_timer() > 0)
	{
		large1.set_timer(large1.get_timer() - 1);
		if (large1.get_timer() == 0)
		{
			large1.set_status('a');
		}
	}
	
	if (large2.get_timer() > 0)
	{
		large2.set_timer(large2.get_timer() - 1);
		if (large2.get_timer() == 0)
		{
			large2.set_status('a');
		}
	}
	}
	//output data of how many car was washed and how many were sent away.
	infile.close();
	ofile.open("results.txt", ios::trunc);
	ofile << sim.get_num_turned_away() << " Cars sent away" << endl;
	avg = sim.get_tot_wait_time() / queued;
	sim.set_num_serviced(sim.get_num_serviced() - sim.get_num_turned_away());
	ofile << sim.get_num_serviced() << " Cars washed" << endl;
	ofile << "Average wait time:" << avg << " minutes" << endl;
	ofile.close();
	cout << "See results.txt for final count." << endl;
	return 0;
}
