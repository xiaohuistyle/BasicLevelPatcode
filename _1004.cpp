#include "pch.h"
#include "_1004.h"
#include<iostream>
#include<string>
using namespace std;
_1004::_1004()
{
	///定义代输入数据个数
	int n ,i = 0;
	cin >> n;
	int k;
	k = n;
	///定义最高和最低的标志
	int topflag=0, lowflag=0;
	///定义 名字 学号 分数
	string name[10];
	string number[10];
	int score[10];
	///循环输入数据
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
	///对循环输入的数据进行排序并且标识最高和最低的数据
	///那就在排序的过程中进行标注
	for (int j = 0; j < k; j++)
	{
		///逐个进行暴力比对，时间复杂度为 N
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
