#include "pch.h"
#include "_1016.h"
#include<iostream>
#include<string>
#include<malloc.h>//�����Զ��Ŀռ�
#include <algorithm>//һЩ���õ��㷨
#include<vector> //��ʾ����
#include <iomanip>//����cout���������
using namespace std;
_1016::_1016()
{
	char A[80], DA, DB, B[80];
	cin >> A >> DA >> B >> DB;
	int countDA=0, countDB=0;

	for (int i = 0; A[i]!='\0'; i++)
	{
		if (A[i]==DA)
		{
			countDA++;

		}
	}
	for (int i = 0; B[i] != '\0'; i++)
	{
		if (B[i] == DB)
		{
			countDB++;

		}
	}
	int sumA=0, sumB = 0;
	for (int i = 0; i < countDA; i++)
	{

		sumA += pow(10,i)*(DA-'0');
	}
	for (int i = 0; i < countDB; i++)
	{

		sumB += pow(10, i)*(DB-'0');
	}
	if (sumA+sumB)
	{
		cout << sumA + sumB;
	}
	else
	{
		cout << '0';
	}

}


_1016::~_1016()
{
}
///�����ύ��
//#include<iostream>
//#include<string>
//#include<math.h>
//#include<malloc.h>//�����Զ��Ŀռ�
//#include <algorithm>//һЩ���õ��㷨
//#include<vector> //��ʾ����
//#include <iomanip>//����cout���������
//using namespace std;
//int main() {
//	char A[80], DA, DB, B[80];
//	cin >> A >> DA >> B >> DB;
//	int countDA = 0, countDB = 0;
//
//	for (int i = 0; A[i] != '\0'; i++)
//	{
//		if (A[i] == DA)
//		{
//			countDA++;
//
//		}
//
//	}
//	for (int i = 0; B[i] != '\0'; i++)
//	{
//		if (B[i] == DB)
//		{
//			countDB++;
//
//		}
//
//	}
//	int sumA = 0, sumB = 0;
//	for (int i = 0; i < countDA; i++)
//	{
//
//		sumA += pow(10, i)*(DA - '0');
//	}
//	for (int i = 0; i < countDB; i++)
//	{
//
//		sumB += pow(10, i)*(DB - '0');
//	}
//	if (sumA + sumB)
//	{
//		cout << sumA + sumB;
//	}
//	else
//	{
//		cout << '0';
//	}
//	return 0;
//}
