#include "customer.h"
#include "boarding_pass.h"
#include "filing.h"
#include "schedule.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;


int main()
{
	int choice = 0;


	person *ptr; //abstract class
	filing file; //filing
	boarding_pass b;
	schedule sch;
	sch.set_schedule(); //displays schedule of the flights

	char fname[20];
	char lname[20];
	int flight_no = 0;
	int no = 0;
	int day, month, year;
	
	while (true)
	{
		system("cls");
		
		
		cout << "                                               AIRLINE RESERVATION SYSTEM" << endl << endl;
		cout << "1. Book a ticket" << endl;
		cout << "2. Issue boarding pass" << endl;
		cout << "3. Check booked customers data" << endl;
		cout << "4. Delete a record" << endl;
		cout << "5. Exit" << endl;

		cout << "enter your choice: ";
		cin >> choice;
		if (choice == 1)
		{
			system("cls");

			sch.display();

			cout << "enter first name: ";
			cin >> fname;

			cout << "enter last name: ";
			cin >> lname;

			cout << "enter flight no: ";
			cin >> flight_no;

			cout << "enter no of tickets: ";
			cin >> no;

			cout << "enter a valid day: ";
			cin >> day;

			cout << "enter a valid month: ";
			cin >> month;

			cout << "enter the year: ";
			cin >> year;


			ptr = new customer(fname, lname, flight_no, no, day, month, year);
			////ptr->display(); //displays customer data
			cout << endl;

			file.input_data(fname, lname, flight_no, no, day, month, year);
			system("cls");
			cout << "ticket has been booked.." << endl;
			system("pause");
		}
		else if (choice == 2)
		{
			system("cls");
			char search[20];
			cout << "search by name: ";
			/*cin.ignore();*/
			cin >> search;

			system("cls");
			b.issue_boarding_pass(search);
			system("pause");

		}
		else if (choice == 3)
		{
			system("cls");
			file.read_data();
			system("pause");
		}
		else if (choice == 4)
		{
			system("cls");
			cout << "enter the name: ";
			cin >> fname;
			file.deleting(fname);
			system("pause");
		}
		else if (choice == 5)
			break;
	}
	
}