#include<iostream>
using namespace std;
template<typename T>
void mysort(T arr[],int len)
 {
	 
	int i = 0;
	for (i; i < len; i++)
	{
		int m = i;
		int k;
		for (k = i + 1; k < len; k++)
		{
			if (arr[m] < arr[k])
			{
				m = k;
			}
		}
		if (m != i)
		{
			char temp = arr[i];
			arr[i] = arr[m];
			arr[m] = temp;
		}
	}
	 
 }

  
void test()
{
	char arr[] = "abdcfe";
	int len = sizeof(arr) / sizeof(char);
	 
	mysort(arr, len);
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
    }
	 
}
int main()
{
	//test();
	int name[] = { 2,5,8,45,89,24,14 };
	int len = sizeof(name) / sizeof(int);
	mysort(name, len);
	for (int i = 0; i < len; i++)
	{
		cout <<  name[i] << " ";
	}
}