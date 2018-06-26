#pragma once
#include "person.h"

class customer:public person
{
	int flight_no;
	int ticketno;
	int day;
	int month;
	int year;

public:
	customer();
	customer(char*,char*,int,int,int,int,int);
	~customer();
	void set_name();
	char* get_name();
	void display();

};