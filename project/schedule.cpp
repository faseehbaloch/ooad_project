#include "schedule.h"
#include <fstream>
#include <iostream>
using namespace std;

schedule::schedule()
{

}

schedule::~schedule()
{
	
}

void schedule::set_flight_data()
{
	ifstream f1;
	f1.open("602.txt");
	ifstream f2;
	f2.open("603.txt");
	ifstream f3;
	f3.open("604.txt");
	ifstream f4;
	f4.open("605.txt");


}

void schedule::set_flight_file()
{
	ofstream f1;
	f1.open("602.txt");
	ofstream f2;
	f2.open("603.txt");
	ofstream f3;
	f3.open("604.txt");
	ofstream f4;
	f4.open("605.txt");
}

void schedule::display()
{
	ifstream fin;
	fin.open("Flight_schedule.txt");

	cout << "FLIGHT NO." << "   " << "FROM" << "         " << "TO" << "       " << "DEPARTURE" << "       " << "ARRIVAL" << endl;
	while (!fin.eof())
	{
		fin >> flight >> f >> t >> time1 >> time2;
		cout << flight << "          " << f << "       " << t << "       " << time1 << "       " << time2 << endl;
		//size1 = i;
	}

}


void schedule::set_schedule()
{
	set_flight_file();
	ofstream file;
	file.open("Flight_schedule.txt");
	file << "602" << " " << "lahore" << " " << "karachi" << " " << "11:00" << " " << "2:00" << endl;
	file << "603" << " " << "islamabad" << " " << "karachi" << " " << "11:00" << " " << "2:00" << endl;
	file << "605" << " " << "lahore" << " " << "islamabad" << " " << "1:00" << " " << "8:00" << endl;
	file << "607" << " " << "peshawar" << " " << "dubai" << " " << "12:00" << " " << "5:00" << endl;
	file << "606" << " " << "faislabad" << " " << "dubai" << " " << "12:00" << " " << "5:00" << endl;
	file << "608" << " " << "chiniot" << " " << "quetta" << " " << "12:00" << " " << "5:00" << endl;
	
}

