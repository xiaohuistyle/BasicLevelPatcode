#include "pch.h"
#include "_1013.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
#include <iomanip>//����cout���������
using namespace std;
_1013::_1013()
{
	int start, end;
	cin >> start >> end;
	int count = 0,show = 1;
	
	for (int i = 1; count < 10000; i++)
	{
		///����Ǹ�����
		if (isprime(i))
		{
			count++;
			
			///�ӵڼ���������ʼ���
			if (count >= start)
			{
				///���ƽ�β�Ļ������
				if (show % 10 == 0 && show >= 10)
				{
					///����ÿ�н�β���Ļ���
					if (show == end)
					{
						cout << i ;
					}
					else
					{
						cout << i << "\n";
					}
					
				}
				else
				{
					cout << i <<' ';
				}
				show++;
			}
			///���ڼ�������
			if (count >= end)
			{
				break;
			}
		}
	}
}

bool _1013::isprime(int number)
{
	bool flag = true;
	if (number%2==0)
	{
		flag = false;
		return flag;
	}
	int sqrtNumber = sqrt(number);
	for (int i = 2; i <= sqrtNumber; i++)
	{
		///�۱�1�������������������������������
		if (number % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

_1013::~_1013()
{
}
///δ����ύ��
//#include<iostream>
//#include<string>
//#include<malloc.h>
//#include <algorithm>
//#include <math.h>
//#include <iomanip>//����cout���������
//using namespace std;
//bool isprime(int number) {
//
//	bool flag = true;
//	if (number % 2 == 0)
//	{
//		flag = false;
//		return flag;
//	}
//	int sqrtNumber = sqrt(number);
//	for (int i = 2; i <= sqrtNumber; i++)
//	{
//		///�۱�1�������������������������������
//		if (number % i == 0)
//		{
//			flag = false;
//			break;
//		}
//	}
//	return flag;
//}
//int main() {
//	int start, end;
//	cin >> start >> end;
//	int count = 0, show = 0;
//	for (int i = 1; count < 10000; i++)
//	{
//		///����Ǹ�����
//		if (isprime(i))
//		{
//			count++;
//			///�Ǹ��������ֲŽ��л������ 
//			if (show % 10 == 0 && show >= 10)
//			{
//				cout << "\n";
//			}
//			///�ӵڼ���������ʼ���
//			if (count >= start)
//			{
//
//				if ((show + 1) % 10 == 0 && (show + 1) >= 0)
//				{
//					cout << i << ' ';
//				}
//				cout << i;
//				show++;
//			}
//			///���ڼ�������
//			if (count >= end)
//			{
//				break;
//			}
//		}
//	}
//}