#include "person.h"
#include <string>
#include <iostream>
using namespace std;


person::person()
{
	fname = NULL;
	lname = NULL;
}

char* person::fgetname()
{
	return fname;
	
}

char* person::lgetname()
{
	return lname;
}

person::~person()
{
	delete[] fname;
	delete[] lname;
}

person::person(char* fname_,char* lname_)
{
	int size = strlen(fname_);

	fname = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		fname[i] = fname_[i];
	}
	fname[size] = NULL;


	int size1 = strlen(lname_);

	lname = new char[size1 + 1];
	for (int i = 0; i < size1; i++)
	{
		lname[i] = lname_[i];
	}
	lname[size1] = NULL;
}
