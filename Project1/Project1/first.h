#pragma once
#include"worker.h"
#include"fstream"
#define AA "test.txt"
class first
{
public:
	first();
	void showmune();
	void addemp();
	void writefile();
	void dumessage();
	void showmessage();
	void exitsystem();
    int empexit(int);   //����
	void Deletemessage(int);  //ɾ��
	void amend(int);      //�޸�
	void cheatmessage(int);  //���
	void sort(int);     //����
    void decidefile();

	bool exitfile;
    worker* *Name;
	char(*myName)[100];
	int number;
	~first()
	{
		if (Name != NULL)
		{
			for (int i=0; i < this->number; i++)
			{
				delete Name[i];
				Name[i] = NULL;
			}
			delete[]Name;
			Name = NULL;
		}
		 if (myName != NULL)
		{
			 
			delete[]myName;
			myName = NULL;
			cout << "2";
		}
		cout << "aa";
		system("cls");
	}
	 
};