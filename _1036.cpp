#include "pch.h"
#include "_1036.h"

//
//������ͳ�°����������������˶�ѧϰ��̣��������������д���룬��Ϊ������ʷ����λ��д������������ͳ��
//2014 ��ף�Ϊ��ף���������ѧ�����ܡ���ʽ�������°�����д�˺ܼ򵥵ļ�������룺����Ļ�ϻ�һ�������Ρ�
//������Ҳ����һ�𻭰ɣ�
//
//�����ʽ��
//
//������һ���и��������α߳� N��3��N��20������������αߵ�ĳ���ַ� C�����һ���ո�
//
//�����ʽ��
//
//����ɸ����ַ� C �����������Ρ�����ע�⵽�м����м�������Ϊ���ý������ȥ���������Σ�
//�������������ʵ������������ 50 % ����������ȡ������


//����������
//
//10 a
//���������
//
//aaaaaaaaaa
//a        a
//a        a
//a        a
//aaaaaaaaaa

/*
��Ҫ�ǶԺ���������� �� ���� ��������� ȷ��
��������� ��Ҫ�ڶ���ȷ��  Y ������
�� ���� �� ��Ҫ��ȷ�� һ�� X������ ����ľ�Ϊ��
//�������� ����ʹ�þ��� ���� �Ǵ���
//��ôֻ�ܿ������н��������

*/
_1036::_1036()
{
	int brim;
	string	 filler;
	cin >> brim >> filler;
	//�趨һ����ά����䵱����

	int rows;
	if (brim % 2 == 0)
	{
		rows = brim / 2;
	}
	else
	{
		rows = brim / 2 + 1;
	}

	for (int i = 0; i < rows; i++)
	{
		if (i == 0 || i == rows - 1)//���н����ж� Ҫ�ǵ�һ�к����һ�������ȫ���
		{
			for (int j = 0; j < brim; j++)
			{
				cout << filler;
			}
			if (i != rows - 1)
			{
				cout << "\n";
			}
			
		}
		else//
		{
			for (int k = 0; k < brim; k++)
			{
				if (k == 0 || k == brim - 1)//���򣬽��Ե�һ�к͵ڶ��н������
				{
					cout << filler;
				}
				else
				{
					cout << " ";
				}
			}
			cout << "\n";
		}
	}
}


_1036::~_1036()
{
}
//�ύ�� ȫ��ͨ�����Ե�
//#include<iostream>
//#include<string>
//#include<malloc.h>//�����Զ��Ŀռ�
//#include <algorithm>//һЩ���õ��㷨
//#include<vector> //��ʾ����
//#include <iomanip>//����cout���������
//using namespace std;
//int main() {
//
//	int brim;
//	string	 filler;
//	cin >> brim >> filler;
//	//�趨һ����ά����䵱����
//
//	int rows;
//	if (brim % 2 == 0)
//	{
//		rows = brim / 2;
//	}
//	else
//	{
//		rows = brim / 2 + 1;
//	}
//
//	for (int i = 0; i < rows; i++)
//	{
//		if (i == 0 || i == rows - 1)//���н����ж� Ҫ�ǵ�һ�к����һ�������ȫ���
//		{
//			for (int j = 0; j < brim; j++)
//			{
//				cout << filler;
//			}
//			if (i != rows - 1)
//			{
//				cout << "\n";
//			}
//
//		}
//		else//
//		{
//			for (int k = 0; k < brim; k++)
//			{
//				if (k == 0 || k == brim - 1)//���򣬽��Ե�һ�к͵ڶ��н������
//				{
//					cout << filler;
//				}
//				else
//				{
//					cout << " ";
//				}
//			}
//			cout << "\n";
//		}
//	}
//
//
//
//}
