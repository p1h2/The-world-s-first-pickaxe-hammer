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
	cout << "BUID��" << BUID << endl;
}

const char* boss::test()  //�ַ���������ֵ���ַ�����ָ�����Ҫ��const���޶�ָ���ָ���ܸı䡣
{
	return ("�ϰ�");
}