#include "pch.h"
#include "_1005.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
using namespace std;

_1005::_1005()
{
	int n;
	cin >> n;
	///int num[100];
	///���Զ�̬����ռ䣬�������Լ��ٿռ��ʹ�� �������ÿռ�
	int *num = (int*)malloc(n * sizeof(int));
	///�������⣺��̬��ά������ν���
	///int *numarray = (int*)malloc(n * sizeof(int));
	//int numarray[100][100];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	int countUse = n;
	///��һ�����ֵ����е�Ԫ��
	for (int j = 0; j <n; j++)
	{
	
		int temp = num[j];
		///���������������0����������
		if (temp==0)
		{
			continue;
		}
		while (temp != 1)///������ֹ���� 
		{
			
			if (temp % 2 == 0)///Ϊż������ִ��ż������
			{
				temp = temp / 2;
			}
			else///��Ϊ��������ִ����������
			{
				temp = (3 * temp + 1) / 2;
			}
			///�ԣ�Ӧ����ѭ���������̭�������е���
			///ѭ��
			for (int i = 0; i < n; i++)
			{
				///��̭���������г��ֵ���
				if (num[i]==temp)
				{
					countUse--;
					num[i] = 0;
					break;
				}
			}


			///numarray[]
			/*numarray[j][k] = temp;
			k++;*/
		}
	}
	///Ȼ���num���������������
	/// ��ѡ������
	int  t;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (num[i]<num[j])
			{
				t = num[i];
				num[i] = num[j];
				num[j] = t;

			}
		}
	}
	int flag = countUse - 1;
	for (int i = 0; num[i]>0; i++)
	{
		if (flag--)
		{
			cout << num[i] << ' ';
		}
		else
		{
			cout << num[i];
		}
		
	}
}


_1005::~_1005()
{
}
///�ύ����
//#include<iostream>
//#include<string>
//#include<malloc.h>
//#include <algorithm>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	///int num[100];
//	///���Զ�̬����ռ䣬�������Լ��ٿռ��ʹ�� �������ÿռ�
//	int *num = (int*)malloc(n * sizeof(int));
//	///�������⣺��̬��ά������ν���
//	///int *numarray = (int*)malloc(n * sizeof(int));
//	//int numarray[100][100];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num[i];
//	}
//	int countUse = n;
//	///��һ�����ֵ����е�Ԫ��
//	for (int j = 0; j < n; j++)
//	{
//
//		int temp = num[j];
//		///���������������0����������
//		if (temp == 0)
//		{
//			continue;
//		}
//		while (temp != 1)///������ֹ���� 
//		{
//
//			if (temp % 2 == 0)///Ϊż������ִ��ż������
//			{
//				temp = temp / 2;
//			}
//			else///��Ϊ��������ִ����������
//			{
//				temp = (3 * temp + 1) / 2;
//			}
//			///�ԣ�Ӧ����ѭ���������̭�������е���
//			///ѭ��
//			for (int i = 0; i < n; i++)
//			{
//				///��̭���������г��ֵ���
//				if (num[i] == temp)
//				{
//					countUse--;
//					num[i] = 0;
//					break;
//				}
//			}
//
//
//			///numarray[]
//			/*numarray[j][k] = temp;
//			k++;*/
//		}
//	}
//	///Ȼ���num���������������
//	/// ��ѡ������
//	int  t;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (num[i] < num[j])
//			{
//				t = num[i];
//				num[i] = num[j];
//				num[j] = t;
//
//			}
//		}
//	}
//	int flag = countUse - 1;
//	for (int i = 0; num[i] > 0; i++)
//	{
//		if (flag--)
//		{
//			cout << num[i] << ' ';
//		}
//		else
//		{
//			cout << num[i];
//		}
//	}
//	return 0;
//}