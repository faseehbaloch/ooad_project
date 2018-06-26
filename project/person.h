#pragma once

class person
{
	char* fname;
	char* lname;
public:
	person();
	~person();
	person(char*,char*);
	virtual void display()=0;
	char* fgetname();
	char* lgetname();
};