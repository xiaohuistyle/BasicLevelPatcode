#include "pch.h"
#include "_1020.h"
struct good
{
	int repertory;
	double price;///��Ҫ������λ���ȱ����������������һ��double���ͣ�������Ϊ����
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
		///���������Ʒ�Ĵ���������г����� �����¸�ֵ�г����󣬼�����������
		if (Good[i].repertory < marketNeed)
		{
			
			result += Good[i].price;
			marketNeed -= Good[i].repertory;
		}///�����ǰ����Ĵ���������г����󣬵����г�����Ϊ0 ��ȡ��ǰ����Ĳ��ֽ��л��﹩Ӧ
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
///ƽ̨�ύ��
//#include<iostream>
//#include<string>
//#include<malloc.h>//�����Զ��Ŀռ�
//#include <algorithm>//һЩ���õ��㷨
//#include<vector> //��ʾ����
//#include <iomanip>//����cout���������
//using namespace std;
//struct good
//{
//	int repertory;
//	double price;///��Ҫ������λ���ȱ����������������һ��double���ͣ�������Ϊ����
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
//		///���������Ʒ�Ĵ���������г����� �����¸�ֵ�г����󣬼�����������
//		if (Good[i].repertory < marketNeed)
//		{
//
//			result += Good[i].price;
//			marketNeed -= Good[i].repertory;
//		}///�����ǰ����Ĵ���������г����󣬵����г�����Ϊ0 ��ȡ��ǰ����Ĳ��ֽ��л��﹩Ӧ
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