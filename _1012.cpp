#include "pch.h"
#include "_1012.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
#include <iomanip>//用于cout的输出控制
using namespace std;

_1012::_1012()
{
	int count;
	cin >> count;
	int num[1000];
	for (int i = 0; i < count; i++)
	{
		cin >> num[i];
	}
	int a1=0, a2=0, a3=0,  a5=0;
	double a4 = 0, a4avg = 0;
	int isprime = 0, a4count = 1;
	int numa1=0, numa2 = 0, numa3 = 0, numa4 = 0, numa5 = 0;
	for (int i = 0; i < count; i++)
	{
		if (num[i]%5==0 && num[i]%2==0)
		{
			a1 += num[i];
			numa1++;
		}
		if (num[i] % 5 == 1)
		{
			if (isprime%2 == 0)
			{
				a2 += num[i];
			}
			else
			{
				a2 -= num[i];
			}
			numa2++;
			isprime++;
		}
		if(num[i] % 5 == 2)
		{
			a3++;
			numa3++;
		}
		if (num[i] % 5 == 3)
		{
			a4 += num[i];
			a4avg = a4 / a4count;
			a4count++;
			numa4++;
		}
		if (num[i] % 5 == 4)
		{
			if (a5 < num[i])
			{
				a5 = num[i];
			}
			numa5++;
		}
	}
	cout.precision(1);
	cout.flags(ios::fixed);
	if (numa1)
	{
		cout << a1 << ' ';
	}
	else
	{
		cout << 'N ';
	}
	if (numa2)
	{
		cout << a2 << ' ';
	}
	else
	{
		cout << 'N ';
	}
	if (numa3)
	{
		cout << a3 << ' ';
	}
	else
	{
		cout << 'N ';
	}
	if (numa4)
	{
		cout <<  a4avg  << ' ';
	}
	else
	{
		cout << 'N ';
	}
	if (numa5)
	{
		cout << a5;
	}
	else
	{
		cout << 'N ';
	}
}


_1012::~_1012()
{
}
///提交版本
//#include<iostream>
//#include<string>
//#include<malloc.h>
//#include <algorithm>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//	int count;
//	cin >> count;
//	int num[1000];
//	for (int i = 0; i < count; i++)
//	{
//		cin >> num[i];
//	}
//	int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
//	double a4 = 0, a4avg = 0;
//	int isprime = 0, a4count = 1;
//	int numa1 = 0, numa2 = 0, numa3 = 0, numa4 = 0, numa5 = 0;
//	for (int i = 0; i < count; i++)
//	{
//		if (num[i] % 5 == 0 && num[i] % 2 == 0)
//		{
//			a1 += num[i];
//			numa1++;
//		}
//		if (num[i] % 5 == 1)
//		{
//			if (isprime % 2 == 0)
//			{
//				a2 += num[i];
//			}
//			else
//			{
//				a2 -= num[i];
//			}
//			numa2++;
//			isprime++;
//		}
//		if (num[i] % 5 == 2)
//		{
//			a3++;
//			numa3++;
//		}
//		if (num[i] % 5 == 3)
//		{
//			a4 += num[i];
//			a4avg = a4 / a4count;
//			a4count++;
//			numa4++;
//		}
//		if (num[i] % 5 == 4)
//		{
//			if (a5 < num[i])
//			{
//				a5 = num[i];
//			}
//			numa5++;
//		}
//	}
//	cout.precision(1);
//	cout.flags(ios::fixed);
//	if (numa1)
//	{
//		cout << a1 << ' ';
//	}
//	else
//	{
//		cout << 'N' << ' ';
//	}
//	if (numa2)
//	{
//		cout << a2 << ' ';
//	}
//	else
//	{
//		cout << 'N' << ' ';
//	}
//	if (numa3)
//	{
//		cout << a3 << ' ';
//	}
//	else
//	{
//		cout << 'N' << ' ';
//	}
//	if (numa4)
//	{
//		cout << a4avg << ' ';
//	}
//	else
//	{
//		cout << 'N' << ' ';
//	}
//	if (numa5)
//	{
//		cout << a5;
//	}
//	else
//	{
//		cout << 'N';
//	}
//	return 0;
//}
