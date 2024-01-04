#pragma once
#include"worker.h"
class manager:public worker
{
public:
	manager();
	manager(char*,int , int);
	virtual void showmessage();
	virtual const char* test();
	~manager()
	{
		cout << "managerÎö¹¹º¯Êý" << endl;
	}
};
