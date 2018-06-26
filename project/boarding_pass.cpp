#include "filing.h"
#include <fstream>
#include "boarding_pass.h"


boarding_pass::boarding_pass()
{

}


void boarding_pass::issue_boarding_pass(char* search)
{
	char searched[20];
	ifstream fin1;
	fin1.open("booked_data.txt", ios::app);


	ifstream fin;
	fin.open("Flight_schedule.txt");

	char l[30];
	int t;
	char fl[20];
	char d1[10];
	char d2[10];
	char date[10];
	


	int l1;
	char t1[20];
	char fl1[20];
	int c = 0;
	while (!fin1.eof())
	{
		fin1 >> searched>>l>>t>>fl>>date;
		if (find(searched, search))
		{
			cout << "name found"<<endl;
			while (!fin.eof())
			{
				fin >> l1 >> t1 >> fl1 >> d1 >> d2;

				if (l1 == t)
				{
					cout << searched << " " << l << " " << t << " " << fl << " " << date<<endl;
					cout << l1 << " " << t1 << " " << fl1 << " " << d1 << " " << d2<<endl;
					c++;
					break;
				}
			}
		}
	}
	if (c == 0)
	{
		cout << "no record exits...."<<endl;
	}
}

boarding_pass::~boarding_pass()
{

}