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
	cout << "����:" << ph << endl;
	cout << "BUID��" <<BUID<<endl;
}
 
const char* employee::test()  //�ַ���������ֵ���ַ�����ָ�����Ҫ��const���޶�ָ���ָ���ܸı䡣
{
	return ("��ͨԱ��");
}

//cin������iostream�࣬����⵽�ո�\t ,\nʱֹͣ��ȡ��