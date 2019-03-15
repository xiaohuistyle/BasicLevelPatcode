#include "pch.h"
#include "_1021.h"

_1021::_1021()
{
	string input;
	cin >> input;
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = 0;
	}
	for (int i = 0; input[i]!='\0'; i++)
	{
		a[input[i]-'0']++;
	}


	for (int i = 0; i < 10; i++)
	{
		if (a[i]!=0)
		{
			if (i==9)
			{
				cout << i << ":" << a[i];
			}
			else
			{
				cout << i << ":" << a[i] << "\n";
			}
		}
	}
}


_1021::~_1021()
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
//
//	string input;
//	cin >> input;
//	int a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		a[i] = 0;
//	}
//	for (int i = 0; input[i] != '\0'; i++)
//	{
//		a[input[i] - '0']++;
//	}
//
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (a[i] != 0)
//		{
//			if (i == 9)
//			{
//				cout << i << ":" << a[i];
//			}
//			else
//			{
//				cout << i << ":" << a[i] << "\n";
//			}
//		}
//	}
//
//	return 0;
//}
