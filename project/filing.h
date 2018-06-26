#pragma once

class filing
{
	char f[30];
	char l[30];
	char t[20];
	char fl[20];
	char date[10];
public:
	filing();

	int getlength(char[]);
	bool find(char[], char[]);


	void deleting(char*);
	void read_data();
	void input_data(char* fname,char* lname, int flight_no,int no_tickets,int,int,int);
};