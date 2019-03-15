#include "pch.h"
#include "_1019.h"

int compare(int a,int b) {
	return a > b;
}
_1019::_1019()
{
	int number;
	cin >> number;
	int element[4];
	int max=0, min=0,result=0;
	if (number % 1111 == 0)
	{
		cout << number << " - " << number << " = " << "0000";
		return;
	}
	while (number!=6174)
	{
		element[0] = number / 1000;
		element[1] = number / 100 % 10;
		element[2] = number % 100 / 10;
		element[3] = number % 10;
		sort(element, element + 4, compare);
		max = element[0] * 1000 + element[1] * 100 + element[2] * 10 + element[3];
		min = element[3] * 1000 + element[2] * 100 + element[1] * 10 + element[0];
		result = max - min;
		
		if (result != 6174)
		{
			cout << max << " - " << min << " = " << result<<"\n";
			number = result;
		}
		else
		{
			cout << max << " - " << min << " = " << result;
			break;
		}
	}
}


_1019::~_1019()
{
}
///平台提交版
//#include<iostream>
//#include<string>
//#include<malloc.h>//申请自动的空间
//#include <algorithm>//一些常用的算法
//#include<vector> //表示向量
//#include <iomanip>//用于cout的输出控制
//using namespace std;
//
//
//
//int compare(int a, int b) {
//	return a > b;
//}
//
//int main() {
//	int number;
//	cin >> number;
//	int element[4];
//	int max = 0, min = 0, result = 0;
//	if (number % 1111 == 0)
//	{
//		cout << number << " - " << number << " = " << "0000";
//		return 0;
//	}
//	while (number != 6174)
//	{
//		element[0] = number / 1000;
//		element[1] = number / 100 % 10;
//		element[2] = number % 100 / 10;
//		element[3] = number % 10;
//		sort(element, element + 4, compare);
//		max = element[0] * 1000 + element[1] * 100 + element[2] * 10 + element[3];
//		min = element[3] * 1000 + element[2] * 100 + element[1] * 10 + element[0];
//		result = max - min;
//
//		if (result != 6174)
//		{
//			cout << max << " - " << min << " = " << result << "\n";
//			number = result;
//		}
//		else
//		{
//			cout << max << " - " << min << " = " << result;
//			break;
//		}
//	}
//	return 0;
//}