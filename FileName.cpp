#include<iostream>
#include<string>
#include<deque> 
#include<algorithm>  //��׼�㷨
#include <stdlib.h>  //�����������ͷ�ļ�        #include <stdio.h> 
#include <time.h> 
using namespace std;
//class ph          
//{
//public:
//	ph()
//	{
//
//	}
//	ph(string name, int score);
//	string name;
//	float score;
//};
//ph::ph(string name, int score)
//{
//	this->name = name;
//	this->score = score;
//}
//
//void lay(deque<ph>&player)   //�����ݷ���������
//{
//	string name= "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string Player = "ѡ��";
//		Player += name[i];
//		int score = 0;
//		ph p(Player, score);
//		player.push_back(p);
//	}
//}
//
//void setscore(deque<ph>&player)   //���    
//{
//	for (deque<ph>::iterator nb = player.begin(); nb != player.end(); nb++)   //������
//	{
//	   deque<int>d;  
//	     for (int i = 0; i < 10; i++)   //��ί��ķ�
//	    { 
//		d.push_back(rand() % 40 + 60);
//	    }
//		 sort(d.begin(), d.end());  //����
//		 d.pop_front();
//		 d.pop_back();
//		 float number = 0;
//		 for (int i = 0; i <d.size(); i++)   // ƽ����
//		 {
//			 number += d.at(i);
//		 }
//
//		 (*nb).score =number/d.size();
//		 cout<< (*nb).name<<":ƽ����Ϊ��"<<(*nb).score;
//		 cout << endl;
//	}
//	 
//	 
//}
//
//int main()                               
//{ 
//	srand(time(NULL)*100+12);     //Ϊ������������ṩһ����ʼ��
//	deque<ph>player;
//	lay(player);
//	setscore(player);
//	 
//	 
//	 
//}
////��ί����ܽ��



template <typename A, typename B>
class ph
{
public:
	ph()
	{

	}
	ph(A, B);
	A name;
	B score;
};

template <typename A, typename B>
ph<typename A, typename B>::ph(A name, B score)
{
	this->name = name;
	this->score=score;
}
                                                        //�ֲ����������������ʱ���Զ��ͷ�
void people(deque<ph<char, int>>&v)
{
	deque<char>letter;
	char LETTER[] = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		letter.push_back(LETTER[i]);
	}
	for (int i=0; i < 5; i++)
	{
		ph<char, int>person(letter.at(i), 0);  //ʵ��������
		v.push_back(person);   //��������
	}
}

void Judges(deque<ph<char, int>>& v)   //���д��
{
	for (deque<ph<char, int>>::iterator nb = v.begin(); nb != v.end(); nb++)
	{
		deque<int>number;
		for (int i = 0; i < 10; i++)
		{

			number.push_back(rand() % 40 + 60);  //at�������ظ�Ԫ�ص�����
		}
		sort(number.begin(), number.end());
		number.pop_front();  //ͷɾ
		number.pop_back();   //βɾ
		float num = 0;
		for (int i = 0; i < number.size(); i++)
		{
			num += number.at(i);
		}

		cout << (*nb).name<< "������"<<num/number.size()<<endl;
	}
}

int main()
{
	srand(time(NULL)*100+45);   
	deque<ph<char, int>>v;
	people(v);
	Judges(v);





}


 