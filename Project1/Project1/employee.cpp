#include"employee.h"
employee::employee()
{


}

employee::employee( char* a,int b,int c)
{
	this->ph = a;
	this->ID = b;
	this->BUID = c;
 }

void employee::showmessage()
{
	cout << "ID:" <<ID<<endl;
	cout << "名字:" << ph << endl;
	cout << "BUID：" <<BUID<<endl;
}
 
const char* employee::test()  //字符串常量赋值给字符数组指针必须要加const。限定指针的指向不能改变。
{
	return ("普通员工");
}

//cin是属于iostream类，当检测到空格，\t ,\n时停止读取。