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
	///��һ��ѭ���͵ڶ���ѭ��֮�䲢û��̫�����ϵ
	for (int i = 0; i < bit; i++)
	{
		///�����������ƶ����̣��������ж���λ��ֻ��Ҫ�����һ�����֣�����һ���ݴ�������ƶ�����һλ����
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
///ƽ̨�ύ��ͨ������
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
//	///��һ��ѭ���͵ڶ���ѭ��֮�䲢û��̫�����ϵ
//	for (int i = 0; i < bit; i++)
//	{
//		///�����������ƶ����̣��������ж���λ��ֻ��Ҫ�����һ�����֣�����һ���ݴ�������ƶ�����һλ����
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