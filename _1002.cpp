#include "pch.h"
#include "_1002.h"
#include<iostream>
#include <string>
using namespace std;
_1002::_1002()
{
	// ����һ��8+�ֽڵĵ�ַ�ռ�
	string longlongNum;
	cin >> longlongNum;
	int sum = 0;
	//�������ƴ���Ķ���
	const char *PinYin[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	//����pat���Բ���ѭ���еĺ��������Զ��һ��
	int count = longlongNum.length();
	//�����������ݵ��ۻ��ͼ���
	for (int i = 0; i < count; i++)
	{
		sum += longlongNum[i] - '0';
	}
	//���λ
	if (sum / 100)
	{
		cout << PinYin[sum / 100] << ' ';
	}
	//��ʮλ
	if (sum / 10)
	{
		cout << PinYin[sum / 10 % 10] << ' ';
	}
	//���λ
	cout << PinYin[sum % 10];
}


_1002::~_1002()
{
}
