#include "pch.h"
#include "_1020.h"
struct good
{
	int repertory;
	double price;///想要保留两位精度必须两数相除必须有一个double类型，否则结果为整数
	double singlePrice;
};
bool compare(good a,good b) {
	return a.singlePrice > b.singlePrice;
}

_1020::_1020()
{
	int goodNumber;
	double marketNeed;
	cin >> goodNumber >> marketNeed;
	good *Good = (good*)malloc(sizeof(good)*goodNumber);
	for (int i = 0; i < goodNumber; i++)
	{
		cin >> Good[i].repertory;
	}
	for (int i = 0; i < goodNumber; i++)
	{
		cin >> Good[i].price;
		Good[i].singlePrice = Good[i].price / Good[i].repertory;
	}

	sort(Good,Good+goodNumber,compare);
	double result=0;
	for (int i = 0; i < goodNumber; i++)
	{
		///如果这种商品的存货量少于市场需求 则重新赋值市场需求，计算已有收益
		if (Good[i].repertory < marketNeed)
		{
			
			result += Good[i].price;
			marketNeed -= Good[i].repertory;
		}///如果当前货物的存货量大于市场需求，但是市场需求不为0 则取当前货物的部分进行货物供应
		else if (Good[i].repertory > 0 && Good[i].repertory > marketNeed && marketNeed > 0)
		{
			
			result += marketNeed / Good[i].repertory * Good[i].price;
			marketNeed -= Good[i].repertory;
		}
	}

	cout.precision(2);
	cout.flags(ios::fixed);
	cout << result;
	//for (int i = 0; i < goodNumber; i++)
	//{
	//	cout << Good[i].singlePrice << "\n";
	//}

	
}


_1020::~_1020()
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
//struct good
//{
//	int repertory;
//	double price;///想要保留两位精度必须两数相除必须有一个double类型，否则结果为整数
//	double singlePrice;
//};
//bool compare(good a, good b) {
//	return a.singlePrice > b.singlePrice;
//}
//
//
//
//int main() {
//	int goodNumber;
//	double marketNeed;
//	cin >> goodNumber >> marketNeed;
//	good *Good = (good*)malloc(sizeof(good)*goodNumber);
//	for (int i = 0; i < goodNumber; i++)
//	{
//		cin >> Good[i].repertory;
//	}
//	for (int i = 0; i < goodNumber; i++)
//	{
//		cin >> Good[i].price;
//		Good[i].singlePrice = Good[i].price / Good[i].repertory;
//	}
//
//	sort(Good, Good + goodNumber, compare);
//	double result = 0;
//	for (int i = 0; i < goodNumber; i++)
//	{
//		///如果这种商品的存货量少于市场需求 则重新赋值市场需求，计算已有收益
//		if (Good[i].repertory < marketNeed)
//		{
//
//			result += Good[i].price;
//			marketNeed -= Good[i].repertory;
//		}///如果当前货物的存货量大于市场需求，但是市场需求不为0 则取当前货物的部分进行货物供应
//		else if (Good[i].repertory > 0 && Good[i].repertory > marketNeed && marketNeed > 0)
//		{
//
//			result += marketNeed / Good[i].repertory * Good[i].price;
//			marketNeed -= Good[i].repertory;
//		}
//	}
//
//	cout.precision(2);
//	cout.flags(ios::fixed);
//	cout << result;
//	return 0;
//}