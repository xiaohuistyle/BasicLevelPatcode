#include "pch.h"
#include "_1005.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
using namespace std;

_1005::_1005()
{
	int n;
	cin >> n;
	///int num[100];
	///尝试动态申请空间，这样可以减少空间的使用 最大的利用空间
	int *num = (int*)malloc(n * sizeof(int));
	///遗留问题：动态二维数组如何建立
	///int *numarray = (int*)malloc(n * sizeof(int));
	//int numarray[100][100];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	int countUse = n;
	///算一个数字的所有的元素
	for (int j = 0; j <n; j++)
	{
	
		int temp = num[j];
		///如果遇到数组中有0的项则跳过
		if (temp==0)
		{
			continue;
		}
		while (temp != 1)///设置终止条件 
		{
			
			if (temp % 2 == 0)///为偶数，则执行偶数操作
			{
				temp = temp / 2;
			}
			else///若为基数，则执行奇数操作
			{
				temp = (3 * temp + 1) / 2;
			}
			///对，应该在循环中逐个淘汰掉数组中的数
			///循环
			for (int i = 0; i < n; i++)
			{
				///淘汰已在数组中出现的数
				if (num[i]==temp)
				{
					countUse--;
					num[i] = 0;
					break;
				}
			}


			///numarray[]
			/*numarray[j][k] = temp;
			k++;*/
		}
	}
	///然后对num进行排序输出即可
	/// 简单选择排序
	int  t;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (num[i]<num[j])
			{
				t = num[i];
				num[i] = num[j];
				num[j] = t;

			}
		}
	}
	int flag = countUse - 1;
	for (int i = 0; num[i]>0; i++)
	{
		if (flag--)
		{
			cout << num[i] << ' ';
		}
		else
		{
			cout << num[i];
		}
		
	}
}


_1005::~_1005()
{
}
///提交程序
//#include<iostream>
//#include<string>
//#include<malloc.h>
//#include <algorithm>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	///int num[100];
//	///尝试动态申请空间，这样可以减少空间的使用 最大的利用空间
//	int *num = (int*)malloc(n * sizeof(int));
//	///遗留问题：动态二维数组如何建立
//	///int *numarray = (int*)malloc(n * sizeof(int));
//	//int numarray[100][100];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num[i];
//	}
//	int countUse = n;
//	///算一个数字的所有的元素
//	for (int j = 0; j < n; j++)
//	{
//
//		int temp = num[j];
//		///如果遇到数组中有0的项则跳过
//		if (temp == 0)
//		{
//			continue;
//		}
//		while (temp != 1)///设置终止条件 
//		{
//
//			if (temp % 2 == 0)///为偶数，则执行偶数操作
//			{
//				temp = temp / 2;
//			}
//			else///若为基数，则执行奇数操作
//			{
//				temp = (3 * temp + 1) / 2;
//			}
//			///对，应该在循环中逐个淘汰掉数组中的数
//			///循环
//			for (int i = 0; i < n; i++)
//			{
//				///淘汰已在数组中出现的数
//				if (num[i] == temp)
//				{
//					countUse--;
//					num[i] = 0;
//					break;
//				}
//			}
//
//
//			///numarray[]
//			/*numarray[j][k] = temp;
//			k++;*/
//		}
//	}
//	///然后对num进行排序输出即可
//	/// 简单选择排序
//	int  t;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (num[i] < num[j])
//			{
//				t = num[i];
//				num[i] = num[j];
//				num[j] = t;
//
//			}
//		}
//	}
//	int flag = countUse - 1;
//	for (int i = 0; num[i] > 0; i++)
//	{
//		if (flag--)
//		{
//			cout << num[i] << ' ';
//		}
//		else
//		{
//			cout << num[i];
//		}
//	}
//	return 0;
//}