#pragma once
#include<iostream>
using namespace std;
class worker
{
public:
	virtual void showmessage()=0;
	virtual const char* test() = 0;
	int ID;
	int BUID;
	char *ph;
	virtual ~worker()
	{
		cout << "workerÎö¹¹º¯Êý" << endl;
	}
};