#include "pch.h"
#include "_1002.h"
#include<iostream>
#include <string>
using namespace std;
_1002::_1002()
{
	// 申请一个8+字节的地址空间
	string longlongNum;
	cin >> longlongNum;
	int sum = 0;
	//进行输出拼音的定义
	const char *PinYin[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	//由于pat测试不认循环中的函数，所以多此一步
	int count = longlongNum.length();
	//进行输入数据的累积和计算
	for (int i = 0; i < count; i++)
	{
		sum += longlongNum[i] - '0';
	}
	//求百位
	if (sum / 100)
	{
		cout << PinYin[sum / 100] << ' ';
	}
	//求十位
	if (sum / 10)
	{
		cout << PinYin[sum / 10 % 10] << ' ';
	}
	//求个位
	cout << PinYin[sum % 10];
}


_1002::~_1002()
{
}
