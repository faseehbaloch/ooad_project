#pragma once
#include "filing.h"
#include "schedule.h"

#include <iostream>
using namespace std;


class boarding_pass:public filing
{
	char name[20];
	char date[10];
	char tno[10];
	char data[100];

public:
	boarding_pass();
	void issue_boarding_pass(char*);
	/*int getlength(char[]);
	bool find(char[],char[]);*/
	~boarding_pass();
};