#include"manager.h"
manager::manager()
{

}



manager::manager( char* d,int e, int f)
{
	this->ph = d;
	this->ID = e;
	this->BUID = f;
}

void manager::showmessage()
{
	cout << "ID:" << ID << endl;
	cout << "name:" << ph << endl;
	cout << "BUID£º" <<  BUID << endl;
}

const char*  manager::test()
{
	return "¾­Àí";
}