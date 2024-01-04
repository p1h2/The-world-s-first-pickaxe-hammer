#pragma once
#include"worker.h"
class boss :public worker
{
public:
	boss( char* , int , int );
	virtual void showmessage();
	virtual const char* test();    //纯虚函数在子类的定义
	~boss()
	{
		cout << "boss析构函数"<<endl;
	}
};


