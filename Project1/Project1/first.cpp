 #include"first.h"
#include"employee.h"
#include"boss.h"
#include"manager.h"


void first::showmune()
{
	cout << "****************************" << endl;
	cout << "******��ӭʹ��ְ������ϵͳ" << endl;
	cout << "******0,�˳�����ϵͳ" << endl;
	cout << "******1,����ְ����Ϣ" << endl;
	cout << "******2,��ʾְ����Ϣ" << endl;
	cout << "******3,ɾ��ְ����Ϣ" << endl;
	cout << "******4,�޸�ְ����Ϣ" << endl;
	cout << "******5,����ְ����Ϣ" << endl;
	cout << "******6,���ձ������" << endl;
	cout << "******7,��������ĵ�" << endl;
	cout << "****************************" << endl;
	cout << endl;
}

void first::exitsystem()
{
	cout << "�˳�ϵͳ";
	exit(0);
}

first::first()
{
	this->number = 0;
	this->Name=NULL;
	this->myName = NULL;
}

void first::addemp()
{
	cout << "�����ְ������";
	int newnumber;
	cin>> newnumber;
	for (int i = 0; i < newnumber; i++)
	{

		worker *worker = NULL;
		cout << "����" << i + 1 << "����:";

		cin >>this->myName[this->number+i];
		cout << "����" << i + 1 << "id:";
		int id;
		cin >> id;
		cout << "����" << i + 1 << "����ID:";
		int buid;
		cin >> buid;
		switch (buid)
		{
		case 1:
			worker = new employee(myName[this->number+i], id, buid);
			break;
		case 2:
			worker = new manager(myName[this->number + i], id, buid);
			break;
		case 3:
			worker = new boss(myName[this->number + i], id, buid);
			break;
		}

		this->Name[this->number+i] = worker;

	} 
	this->number = this->number + newnumber;
	this->writefile();
		 
}
    
void first::writefile()
{

	ofstream wt;
	wt.open("test.txt",ios::out);
	for (int i = 0; i < this->number; i++)
	{

	wt << this->Name[i]->ph << " " << this->Name[i]->ID << " " << this->Name[i]->BUID<<endl;
	
	}

}



void first::dumessage()
{

	ifstream du;
	du.open("test.txt", ios::in);
	if (!du.is_open())
	{
		this->exitfile = false;
	cout << "��ȡʧ��";
	return;
	}
	char a;
	du >> a;
	if (du.eof())
	{
		cout << "�ļ��հ�" << endl << endl;
	}
	else
	this->exitfile = true;
	cout << "�ǿ��ļ�" << endl;
	du.close();

	ifstream du1;
	du1.open("test.txt", ios::in);
	char (*name)[100] = new char[100][100];
	myName = name;
	int id;
	int buid;
	int i = 0;
	worker* *work = new worker* [100];
	Name=work;


	 while (du1 >> myName[i] &&du1>>id&&du1>>buid)
	 {
	        worker* work = NULL;
	    if (buid = 1)
		{
			work= new employee(myName[i], id, buid);
	    }                //��ַ�浽 char*
		else if (buid = 2)
		{
			work = new manager(myName[i], id, buid);
		}
		else
		{
			work = new boss(myName[i], id, buid);
		}
		this->Name[i] = work;
		i++; 
	}
	 du.close();
	 this->number = i;
	 cout << "�ļ��е����ڵ�������Ϊ��" << i << endl<< endl;
	 cout << "����Ƥ����"<<endl;
}



void first::Deletemessage(int id)
{

	int k = 0;
	while (empexit(id) != -2)
	{

		k++;
		cout << "����12��Ա��" <<k<< endl;
		int i = this->empexit(id);
		for (i; i < this->number - 1; i++)
			{
				this->Name[i] = Name[i + 1];

			}
		this->number = number - 1;
	}
	   this->writefile();
}


void first::amend(int id)
{
	while(this->empexit(id) != -2)
	{
		cout << "Ա������Ϣ��" << endl;
		this->Name[this->empexit(id)]->showmessage();

		cout << "�����޸ĵ�ID:" << endl;
		cin >> this->Name[this->empexit(id)]->ID;
		cout << endl;
		cout << "�����޸ĵ�����:" << endl;
		cin >> this->Name[this->empexit(id)]->ph;

		cout << "�����޸ĵĲ���ID:" << endl;
		cin >> this->Name[this->empexit(id)]->BUID;
	}
	this->writefile();
}


int  first::empexit(int id)  //�ж�Ա���Ƿ����
{

	int i;
	int x=0;
	for ( i = 0; i < this->number; i++)
	{
		 
		if (this->Name[i]->ID == id)
		{
			x = -1;
			return i;
		}

	}

	if ((i == number) && (x != -1))
	{

		cout << "���ڲ�����ID����" << id << "��Ա��";
		return x = -2;
	}

}
  
void first::cheatmessage(int id)  //������Ϣ
{
	int i = 0;
	int x = 0;
	for (i; i < this->number; i++)
	{
		if (this->Name[i]->ID == id)
		{
			this->Name[i]->showmessage();
			cout << endl;
			x = -1;
		}
	}

	if ((i==number)&&(x != -1))
	{
		cout << "ӵ�д�ID�ŵ��˲�����";
	}

}

void first::showmessage()
{

	cout << "ְ������Ϣ��" << endl;
	for (int i = 0; i < this->number; i++)
	{
		this->Name[i]->showmessage();
		cout << endl;
	}
	 
}

void first::sort(int select)
{
	if (select == 1) //����
	{
		int i = 0;
		for (i; i < this->number; i++)
		{
			int m = i;
			int j = m + 1;
			for (j; j < this->number; j++)
			{
				if (this->Name[m]->ID > this->Name[j]->ID)
				{
					m = j;
				}
				worker* ph = this->Name[i];
				this->Name[i] = this->Name[m];
				this->Name[m] = ph;
			}

		}
	}
	else  //����
	{
		int i = 0;
		for (i; i < this->number; i++)
		{
			int m = i;
			int j = m + 1;
			for (j; j < this->number; j++)
			{
				if (this->Name[m]->ID < this->Name[j]->ID)
				{
					m = j;
				}
				worker* ph = this->Name[i];
				this->Name[i] = this->Name[m];
				this->Name[m] = ph;
			}

		}
	}
	
	for (int i=0; i < this->number; i++)
	{
		this->Name[i]->showmessage();
		cout<< endl;
	}
	this->writefile();
}

void first::decidefile() 
{

		cout << "�Ƿ�����ļ�"<<endl;
		cout << "1,ȷ��  2,ȡ��" << endl;
		int select;
		cin>> select;
		if (select == 1)
		{
			ofstream ph;
			ph.open("test.txt", ios::trunc);   //����ļ����ڣ���ɾ���ٴ���
			cout << "�ļ�����ɾ���";
		}
		
}