#pragma once
#include"worker.h"
class boss :public worker
{
public:
	boss( char* , int , int );
	virtual void showmessage();
	virtual const char* test();    //���麯��������Ķ���
	~boss()
	{
		cout << "boss��������"<<endl;
	}
};


