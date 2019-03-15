#include "pch.h"
#include "_1008.h"
#include "_1008.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
using namespace std;


_1008::_1008()
{
	int number, bit;
	cin >> number >> bit;
	int *a = (int *)malloc(sizeof(int)*number);
	for (int i = 0; i < number; i++)
	{
		cin >> a[i];
	}
	int temp;
	///第一层循环和第二层循环之间并没有太多的联系
	for (int i = 0; i < bit; i++)
	{
		///这是整个的移动过程，不管它有多少位，只需要将最后一个数字，借助一个暂存变量，移动到第一位即可
		temp = a[number-1];
		for (int j = 1; j < number ; j++)
		{
			a[number - j] = a[number  - j - 1];
		}
		a[0] = temp;
	}


	for (int i = 0; i < number; i++)
	{
		if (i == number-1)
		{
			cout << a[i];
		}
		else
		{
			cout << a[i] << ' ';
		}
		
	}
}


_1008::~_1008()
{
}
///平台提交可通过代码
//#include<iostream>
//#include<string>
//#include<malloc.h>
//#include <algorithm>
//using namespace std;
//int main() {
//	int number, bit;
//	cin >> number >> bit;
//	int *a = (int *)malloc(sizeof(int)*number);
//	for (int i = 0; i < number; i++)
//	{
//		cin >> a[i];
//	}
//	int temp;
//	///第一层循环和第二层循环之间并没有太多的联系
//	for (int i = 0; i < bit; i++)
//	{
//		///这是整个的移动过程，不管它有多少位，只需要将最后一个数字，借助一个暂存变量，移动到第一位即可
//		temp = a[number - 1];
//		for (int j = 1; j < number; j++)
//		{
//			a[number - j] = a[number - j - 1];
//		}
//		a[0] = temp;
//	}
//
//
//	for (int i = 0; i < number; i++)
//	{
//		if (i == number - 1)
//		{
//			cout << a[i];
//		}
//		else
//		{
//			cout << a[i] << ' ';
//		}
//
//	}
//
//}