#include "filing.h"
#include <fstream>
#include <iostream>
using namespace std;


filing::filing()
{

}

void filing::input_data(char* fname,char* lname,int flight_no,int no_tickets,int day_,int month_, int year_)
{
	fstream fin;
	fin.open("booked_data.txt",ios::app);
	fin << fname << " " <<lname <<" "<< flight_no << " " << no_tickets <<" "<<day_<<"/"<<month_<<"/"<<year_<< endl;

}

void filing::deleting(char* name)
{
	ifstream myfile;
	ofstream temp;
	myfile.open("booked_data.txt");
	temp.open("temp.txt");


	while (!myfile.eof())
	{
		myfile >> f >> l >> t >> fl >> date;
		if (!find(f,name))
			temp << f << " " << l << " " << t << " " << fl << " " << date << endl;
	}
	cout << "The record with the name " << name << " has been deleted if it exsisted" << endl;
	myfile.close();
	temp.close();
	remove("booked_data.txt");
	rename("temp.txt", "booked_data.txt");
}


int filing::getlength(char name[])
{
	int count = 0;
	for (int i = 0; name[i] != '\0'; i++)
	{
		count++;
	}

	return count;
}

bool filing::find(char arr1[], char arr2[])
{
	int count = 0;

	if (getlength(arr1) == getlength(arr2))
	{
		while (arr1[count] != '\0')
		{
			if (arr1[count] != arr2[count])
			{
				return false;
			}
			count++;
		}
		return true;
	}

	return false;
}


void filing::read_data()
{
	char str[100];
	ifstream fin1;
	fin1.open("booked_data.txt",ios::app);

	while (!fin1.eof())
	{

		fin1.getline(str, 100);
		cout << str << endl;
	}


}
