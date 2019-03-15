#include "pch.h"
#include "_1001.h"
#include<iostream>
using namespace std;
_1001::_1001()
{
	//作用：存储待计算数
	int N;//向内存申请一个大小为4字节的空间来存储N
	cout << "请输入N";
	cin >> N;
	//作用:统计步数
	int step = 0;//向内存申请一个大小为4字节的空间来存储step
	
	while (N != 1)//设置终止条件 
	{
		step++;
		if (N % 2 == 0)//为偶数，则执行偶数操作
		{
			N = N / 2;
		}
		else//若为基数，则执行奇数操作
		{
			N = (3 * N + 1)/2;
		}
	}
	//循环终止之后，输出计算结果
	cout << "总共经过了" << step << "步";
}


_1001::~_1001()
{

}
