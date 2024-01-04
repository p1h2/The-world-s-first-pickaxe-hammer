 #include"first.h"
#include"employee.h"
#include"boss.h"
#include"manager.h"


void first::showmune()
{
	cout << "****************************" << endl;
	cout << "******欢迎使用职工管理系统" << endl;
	cout << "******0,退出管理系统" << endl;
	cout << "******1,增加职工信息" << endl;
	cout << "******2,显示职工信息" << endl;
	cout << "******3,删除职工信息" << endl;
	cout << "******4,修改职工信息" << endl;
	cout << "******5,查找职工信息" << endl;
	cout << "******6,按照编号排序" << endl;
	cout << "******7,清空所有文档" << endl;
	cout << "****************************" << endl;
	cout << endl;
}

void first::exitsystem()
{
	cout << "退出系统";
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
	cout << "新添加职工数：";
	int newnumber;
	cin>> newnumber;
	for (int i = 0; i < newnumber; i++)
	{

		worker *worker = NULL;
		cout << "新人" << i + 1 << "姓名:";

		cin >>this->myName[this->number+i];
		cout << "新人" << i + 1 << "id:";
		int id;
		cin >> id;
		cout << "新人" << i + 1 << "部门ID:";
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
	cout << "读取失败";
	return;
	}
	char a;
	du >> a;
	if (du.eof())
	{
		cout << "文件空白" << endl << endl;
	}
	else
	this->exitfile = true;
	cout << "非空文件" << endl;
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
	    }                //地址存到 char*
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
	 cout << "文件中的现在的人总数为：" << i << endl<< endl;
	 cout << "世首皮卡锤"<<endl;
}



void first::Deletemessage(int id)
{

	int k = 0;
	while (empexit(id) != -2)
	{

		k++;
		cout << "存在12号员工" <<k<< endl;
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
		cout << "员工的信息：" << endl;
		this->Name[this->empexit(id)]->showmessage();

		cout << "输入修改的ID:" << endl;
		cin >> this->Name[this->empexit(id)]->ID;
		cout << endl;
		cout << "输入修改的姓名:" << endl;
		cin >> this->Name[this->empexit(id)]->ph;

		cout << "输入修改的部门ID:" << endl;
		cin >> this->Name[this->empexit(id)]->BUID;
	}
	this->writefile();
}


int  first::empexit(int id)  //判断员工是否存在
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

		cout << "现在不存在ID号是" << id << "的员工";
		return x = -2;
	}

}
  
void first::cheatmessage(int id)  //查找信息
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
		cout << "拥有此ID号的人不存在";
	}

}

void first::showmessage()
{

	cout << "职工的信息：" << endl;
	for (int i = 0; i < this->number; i++)
	{
		this->Name[i]->showmessage();
		cout << endl;
	}
	 
}

void first::sort(int select)
{
	if (select == 1) //升序
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
	else  //降序
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

		cout << "是否清空文件"<<endl;
		cout << "1,确认  2,取消" << endl;
		int select;
		cin>> select;
		if (select == 1)
		{
			ofstream ph;
			ph.open("test.txt", ios::trunc);   //如果文件存在，先删除再创建
			cout << "文件清理干净了";
		}
		
}