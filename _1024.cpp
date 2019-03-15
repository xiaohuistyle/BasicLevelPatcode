#include "pch.h"
#include "_1024.h"


_1024::_1024()
{
	string input;
	cin >> input;
	///对字符串进行处理
	///如果是正数如何处理
	int dotPlace = 0,EPlace = 0,symbloPlace = 0 , precision = 0;
	symbloPlace = input.find('+');
	dotPlace = input.find('.');
	EPlace = input.find('E');
	string a = input.substr(dotPlace - 1, EPlace - 1);
	precision = (input[EPlace + 2] - '0') * 10 + (input[EPlace + 3] - '0');
	if (input[0] == '+')
	{
		if (input[EPlace+1] ==  '-')
		{
			for (int i = 0; i <= precision; i++)
			{
				if (i == 1)
				{
					cout << '.';
				}
				else
				{
					cout << 0;
				}
			}
			for (int i = 0; i < a.length(); i++)
			{
				if (a[i] != '.')
				{
					cout << a[i];
				}
			}
		}
		else if ( input[EPlace + 1] == '+')
		{
			for (int i = 0; i < a.length(); i++)
			{
				if (a[i] != '.')
				{
					cout << a[i];
				}
			}
			for (int i = 0; i <= precision; i++)
			{
				
					cout << 0;
			}
		}
	}
	else if(input[0] == '-')///如果是负数如何处理
	{
		cout << '-';
		if (input[EPlace + 1] == '-')
		{
			for (int i = 0; i <= precision; i++)
			{
				if (i == 1)
				{
					cout << '.';
				}
				else
				{
					cout << 0;
				}
			}
			for (int i = 0; i < a.length(); i++)
			{
				if (a[i] != '.')
				{
					cout << a[i];
				}
			}
		}
		else if (input[EPlace + 1] == '+')
		{
			for (int i = 0; i < a.length(); i++)
			{
				if (a[i] != '.')
				{
					cout << a[i];
				}
			}
			for (int i = 0; i <= precision; i++)
			{

				cout << 0;
			}
		}
	}
}


_1024::~_1024()
{
}
///平台提交版
//#include<iostream>
//#include<string>
//#include<malloc.h>//申请自动的空间
//#include <algorithm>//一些常用的算法
//#include<vector> //表示向量
//#include <iomanip>//用于cout的输出控制
//using namespace std;
//int main() {
//	string input;
//	cin >> input;
//	///对字符串进行处理
//	///如果是正数如何处理
//	int dotPlace = 0, EPlace = 0, symbloPlace = 0, precision = 0;
//	symbloPlace = input.find('+');
//	dotPlace = input.find('.');
//	EPlace = input.find('E');
//	string a = input.substr(dotPlace - 1, EPlace - 1);
//	precision = (input[EPlace + 2] - '0') * 10 + (input[EPlace + 3] - '0');
//	if (input[0] == '+')
//	{
//		if (input[EPlace + 1] == '-')
//		{
//			for (int i = 0; i <= precision; i++)
//			{
//				if (i == 1)
//				{
//					cout << '.';
//				}
//				else
//				{
//					cout << 0;
//				}
//			}
//			for (int i = 0; i < a.length(); i++)
//			{
//				if (a[i] != '.')
//				{
//					cout << a[i];
//				}
//			}
//		}
//		else if (input[EPlace + 1] == '+')
//		{
//			for (int i = 0; i < a.length(); i++)
//			{
//				if (a[i] != '.')
//				{
//					cout << a[i];
//				}
//			}
//			for (int i = 0; i <= precision; i++)
//			{
//
//				cout << 0;
//			}
//		}
//	}
//	else if (input[0] == '-')///如果是负数如何处理
//	{
//		cout << '-';
//		if (input[EPlace + 1] == '-')
//		{
//			for (int i = 0; i <= precision; i++)
//			{
//				if (i == 1)
//				{
//					cout << '.';
//				}
//				else
//				{
//					cout << 0;
//				}
//			}
//			for (int i = 0; i < a.length(); i++)
//			{
//				if (a[i] != '.')
//				{
//					cout << a[i];
//				}
//			}
//		}
//		else if (input[EPlace + 1] == '+')
//		{
//			for (int i = 0; i < a.length(); i++)
//			{
//				if (a[i] != '.')
//				{
//					cout << a[i];
//				}
//			}
//			for (int i = 0; i <= precision; i++)
//			{
//
//				cout << 0;
//			}
//		}
//	}
//
//
//
//
//}