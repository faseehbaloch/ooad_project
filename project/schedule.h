#pragma once
#include <fstream>



class schedule
{
	char flight[50];
	char f[50];
	char t[50];
	char time1[50];
	char time2[50];

public:
	schedule();
	~schedule();
	void set_flight_file();
	void set_flight_data();
	void set_schedule();
	void display();
};