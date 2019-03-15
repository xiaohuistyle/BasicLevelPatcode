#include "pch.h"
#include "_1035.h"


/*
思路：
如果说中间序列有序的序列之后数据一样，则为直接插入排序
如果说中间元素局部有序，但是大部分依然乱序，则说明，是归并排序




*/

_1035::_1035()
{
	int N;
	cin >> N;
	vector<int> origin, target;
	
	int value;
	for (int i = 0; i < N; i++){
		
		cin >> value;
		origin.push_back(value);
	}

	for (int i = 0; i < N; i++)
	{
		
		cin >> value;
		target.push_back(value);
	}
	int index;
	for (int i = 1; i < N; i++)
	{

		if (target[i]<target[i-1])
		{
			index = i;
			break;
		}
	}
	bool flag = true;
	for (int i = index; i < N; i++)
	{
		//如果有不一样的 则为归并排序 归并排序判断为false
		if (origin[i]!=target[i])
		{
			flag = false;
			break;
		}
	}
	//如果是直接插入排序 则进行一轮排序后输出
	if (flag)
	{
		cout << "Insertion Sort"<<"\n";
		//对前 index个字符进行排序 则就是一轮排序后的直接插入排序的序列
		sort(origin.begin(),origin.begin() + index + 1);
		for (int i = 0; i < N; i++)
		{
			if (i != N-1)
			{
				cout << origin[i] << " ";
			}
			else
			{
				cout << origin[i];
			}		
		}
	}
	else//如果是归并排序
	{
		cout << "Merge Sort"<<"\n";
		bool isNotEqual = true;
		int k = 1;
		while (isNotEqual) {
			isNotEqual = false;
			if (!equal(origin.begin(),origin.end(),target.begin()))
			{
				//如果说他们在这个序列中不相等 则一定为 就进行一次归并排序
				isNotEqual = true;
			}
			k *= 2;
			//它以几倍的步进方式进行测算，则就使得计算次数减少
			for (int i = 0; i < N/k; i++)
			{
				sort(origin.begin() + i* k, origin.begin()+(i+1)*k );
			}
			//
			//sort(origin.begin()+ k * (N / k),origin.end());
		}
		for (int i = 0; i < N; i++)
		{
			if (i != N - 1)
			{
				cout << origin[i] << " ";
			}
			else
			{
				cout << origin[i];
			}
		}
	}


	

}


_1035::~_1035()
{
}
//提交版代码

//#include<iostream>
//#include<string>
//#include<malloc.h>//申请自动的空间
//#include <algorithm>//一些常用的算法
//#include<vector> //表示向量
//#include <iomanip>//用于cout的输出控制
//using namespace std;
//
//
//int main() {
//
//	int N;
//	cin >> N;
//	vector<int> origin, target;
//
//	int value;
//	for (int i = 0; i < N; i++) {
//
//		cin >> value;
//		origin.push_back(value);
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//
//		cin >> value;
//		target.push_back(value);
//	}
//	int index;
//	for (int i = 1; i < N; i++)
//	{
//
//		if (target[i] < target[i - 1])
//		{
//			index = i;
//			break;
//		}
//	}
//	bool flag = true;
//	for (int i = index; i < N; i++)
//	{
//		//如果有不一样的 则为归并排序 归并排序判断为false
//		if (origin[i] != target[i])
//		{
//			flag = false;
//			break;
//		}
//	}
//	//如果是直接插入排序 则进行一轮排序后输出
//	if (flag)
//	{
//		cout << "Insertion Sort" << "\n";
//		//对前 index个字符进行排序 则就是一轮排序后的直接插入排序的序列
//		sort(origin.begin(), origin.begin() + index + 1);
//		for (int i = 0; i < N; i++)
//		{
//			if (i != N - 1)
//			{
//				cout << origin[i] << " ";
//			}
//			else
//			{
//				cout << origin[i];
//			}
//		}
//	}
//	else//如果是归并排序
//	{
//		cout << "Merge Sort" << "\n";
//		bool isNotEqual = true;
//		int k = 1;
//		while (isNotEqual) {
//			isNotEqual = false;
//			if (!equal(origin.begin(), origin.end(), target.begin()))
//			{
//				//如果说他们在这个序列中不相等 则一定为 就进行一次归并排序
//				isNotEqual = true;
//			}
//			k *= 2;
//			//它以几倍的步进方式进行测算，则就使得计算次数减少
//			for (int i = 0; i < N / k; i++)
//			{
//				sort(origin.begin() + i * k, origin.begin() + (i + 1)*k);
//			}
//			//
//			//sort(origin.begin()+ k * (N / k),origin.end());
//		}
//		for (int i = 0; i < N; i++)
//		{
//			if (i != N - 1)
//			{
//				cout << origin[i] << " ";
//			}
//			else
//			{
//				cout << origin[i];
//			}
//		}
//	}
//	return 0;
//
//}
