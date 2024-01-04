#include"boss.h"
boss::boss( char* a, int b, int c)
{
	this->ph = a;
	this->ID = b;
	this->BUID = c;
}

void boss::showmessage()
{
	cout << "ID:" << ID << endl;
	cout << "name:" << ph << endl;
	cout << "BUID：" << BUID << endl;
}

const char* boss::test()  //字符串常量赋值给字符数组指针必须要加const。限定指针的指向不能改变。
{
	return ("老板");
}