#include "pch.h"
#include "_1004.h"
#include<iostream>
#include<string>
using namespace std;
_1004::_1004()
{
	///������������ݸ���
	int n ,i = 0;
	cin >> n;
	int k;
	k = n;
	///������ߺ���͵ı�־
	int topflag=0, lowflag=0;
	///���� ���� ѧ�� ����
	string name[10];
	string number[10];
	int score[10];
	///ѭ����������
	//while (n--)
	//{
	//	cin >> name[i];
	//	cin >> number[i];
	//	cin >> score[i];
	//	i++;
	//}
	for (int y = 0; y < k; y++)
	{
		cin >> name[y];
		cin >> number[y];
		cin >> score[y];

	}
	///��ѭ����������ݽ��������ұ�ʶ��ߺ���͵�����
	///�Ǿ�������Ĺ����н��б�ע
	for (int j = 0; j < k; j++)
	{
		///������б����ȶԣ�ʱ�临�Ӷ�Ϊ N
		if (score[lowflag] >= score[j])
		{
			lowflag = j;
		}
		if (score[topflag] <= score[j])
		{
			topflag = j;
		}
	}

	cout << name[topflag] << ' ' << number[topflag]<<"\n";
	cout << name[lowflag] << ' ' << number[lowflag];
}


_1004::~_1004()
{
}
