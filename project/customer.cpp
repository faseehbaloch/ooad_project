#include "customer.h"
#include <string>
#include <iostream>
using namespace std;


customer::customer()
{
	flight_no = 0;
	ticketno = NULL;

	day = 0;
	month = 0;
	year = 0;
}

customer::~customer()
{
	
}

void customer::display()
{

	cout << customer::fgetname() << endl << customer::lgetname()<<endl << "no of tickets : " << ticketno << endl << "flight no is:" << flight_no << endl;
}

customer::customer(char* name_,char* lname_ ,int flight_, int ticket_,int day_,int month_,int year_) :person(name_,lname_)
{

	flight_no = flight_;
	ticketno = ticket_;
	day = day_;
	month = month_;
	year = year_;
}


