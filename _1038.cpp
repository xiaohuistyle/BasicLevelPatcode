#include "pch.h"
#include "_1038.h"


_1038::_1038()
{
	int N;
	cin >> N;
	int scoreNum;
	scoreNum = N;
	int *score = (int *)malloc(sizeof(int)*scoreNum);
	int checkNum;
	
	
	for (int i = 0; i < N; i++)
	{
		cin >> score[i];
	}
	cin >> checkNum;
	int *checkScore = (int *)malloc(sizeof(int)*checkNum);
	for (int i = 0; i < checkNum; i++)
	{
		cin>>checkScore[i];
	}
	int *num = (int *)malloc(sizeof(int)*checkNum);
	for (int i = 0; i < checkNum; i++)
	{
		num[i] = 0;
	}
	for (int i = 0; i < checkNum; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (checkScore[i]==score[j])
			{
				num[i]++;
			}
		}
	}
	for (int i = 0; i < checkNum; i++)
	{
		cout << num[i];
		if (i != checkNum-1)
		{
			cout << " ";
		}
		
	}



}


_1038::~_1038()
{
}
//���ύ��
//#include<iostream>
//#include<string>
//#include<malloc.h>//�����Զ��Ŀռ�
//#include <algorithm>//һЩ���õ��㷨
//#include<vector> //��ʾ����
//#include <iomanip>//����cout���������
//using namespace std;
//int main() {
//	int N;
//	cin >> N;
//	int scoreNum;
//	scoreNum = N;
//	int *score = (int *)malloc(sizeof(int)*scoreNum);
//	int checkNum;
//
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> score[i];
//	}
//	cin >> checkNum;
//	int *checkScore = (int *)malloc(sizeof(int)*checkNum);
//	for (int i = 0; i < checkNum; i++)
//	{
//		cin >> checkScore[i];
//	}
//	int *num = (int *)malloc(sizeof(int)*checkNum);
//	for (int i = 0; i < checkNum; i++)
//	{
//		num[i] = 0;
//	}
//	for (int i = 0; i < checkNum; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (checkScore[i] == score[j])
//			{
//				num[i]++;
//			}
//		}
//	}
//	for (int i = 0; i < checkNum; i++)
//	{
//		cout << num[i];
//		if (i != checkNum - 1)
//		{
//			cout << " ";
//		}
//
//	}
//}