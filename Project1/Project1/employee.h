#pragma once
#include"worker.h"
class employee:public worker
{
public:
	employee();
	employee( char* a, int, int);
	virtual void showmessage();
	virtual const char* test();    //���麯��������Ķ��� 
	~employee()
	{
		cout << "employee��������" << endl;
	}
};

 