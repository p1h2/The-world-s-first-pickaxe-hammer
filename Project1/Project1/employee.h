#pragma once
#include"worker.h"
class employee:public worker
{
public:
	employee();
	employee( char* a, int, int);
	virtual void showmessage();
	virtual const char* test();    //纯虚函数在子类的定义 
	~employee()
	{
		cout << "employee析构函数" << endl;
	}
};

 