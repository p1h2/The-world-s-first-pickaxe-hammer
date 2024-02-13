#include<iostream>
#include<string>
#include<deque> 
#include<algorithm>  //标准算法
#include <stdlib.h>  //产生随机数的头文件        #include <stdio.h> 
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
//void lay(deque<ph>&player)   //将数据放入容器中
//{
//	string name= "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string Player = "选手";
//		Player += name[i];
//		int score = 0;
//		ph p(Player, score);
//		player.push_back(p);
//	}
//}
//
//void setscore(deque<ph>&player)   //打分    
//{
//	for (deque<ph>::iterator nb = player.begin(); nb != player.end(); nb++)   //大容器
//	{
//	   deque<int>d;  
//	     for (int i = 0; i < 10; i++)   //评委打的分
//	    { 
//		d.push_back(rand() % 40 + 60);
//	    }
//		 sort(d.begin(), d.end());  //排序
//		 d.pop_front();
//		 d.pop_back();
//		 float number = 0;
//		 for (int i = 0; i <d.size(); i++)   // 平均分
//		 {
//			 number += d.at(i);
//		 }
//
//		 (*nb).score =number/d.size();
//		 cout<< (*nb).name<<":平均分为："<<(*nb).score;
//		 cout << endl;
//	}
//	 
//	 
//}
//
//int main()                               
//{ 
//	srand(time(NULL)*100+12);     //为随机数的生成提供一个起始点
//	deque<ph>player;
//	lay(player);
//	setscore(player);
//	 
//	 
//	 
//}
////评委打分总结符



template <typename A, typename B>  //利用类模版
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
                                                        //局部变量在作用域结束时会自动释放
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
		ph<char, int>person(letter.at(i), 0);  //实例化对象
		v.push_back(person);   //插入数据
	}
}

void Judges(deque<ph<char, int>>& v)   //裁判打分
{
	for (deque<ph<char, int>>::iterator nb = v.begin(); nb != v.end(); nb++)
	{
		deque<int>number;
		for (int i = 0; i < 10; i++)
		{

			number.push_back(rand() % 40 + 60);  //at函数返回该元素的引用
		}
		sort(number.begin(), number.end());
		number.pop_front();  //头删
		number.pop_back();   //尾删
		float num = 0;
		for (int i = 0; i < number.size(); i++)
		{
			num += number.at(i);
		}

		cout << (*nb).name<< "分数："<<num/number.size()<<endl;
	}
}

int main()
{
	srand(time(NULL)*100+45);   
	deque<ph<char, int>>v;
	people(v);
	Judges(v);





}


 
