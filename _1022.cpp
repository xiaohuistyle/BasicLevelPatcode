#include "pch.h"
#include "_1022.h"
//#define GET_ARRAY_LEN(array,len) {len = (sizeof(array) / sizeof(array[0]));}

_1022::_1022()
{
	int A, B, D , sum = 0;
	cin >> A >> B >> D;
	sum = A + B;
	int a[31], num = 0;
	do
	{
		a[num++] = sum % D;
		sum /= D;
	} while (sum!=0);


	for (int i = num-1; i>=0; i--)
	{
		cout << a[i];
	}
}


_1022::~_1022()
{
}
///ƽ̨�ύ��
//#include<iostream>
//#include<string>
//#include<malloc.h>//�����Զ��Ŀռ�
//#include <algorithm>//һЩ���õ��㷨
//#include<vector> //��ʾ����
//#include <iomanip>//����cout���������
//using namespace std;
//
//int main() {
//
//	int A, B, D, sum = 0;
//	cin >> A >> B >> D;
//	sum = A + B;
//	int a[31], num = 0;
//	do
//	{
//		a[num++] = sum % D;
//		sum /= D;
//	} while (sum != 0);
//
//
//	for (int i = num - 1; i >= 0; i--)
//	{
//		cout << a[i];
//	}
//}