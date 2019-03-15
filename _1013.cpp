#include "pch.h"
#include "_1013.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
#include <iomanip>//用于cout的输出控制
using namespace std;
_1013::_1013()
{
	int start, end;
	cin >> start >> end;
	int count = 0,show = 1;
	
	for (int i = 1; count < 10000; i++)
	{
		///如果是个素数
		if (isprime(i))
		{
			count++;
			
			///从第几个素数开始输出
			if (count >= start)
			{
				///控制结尾的还行输出
				if (show % 10 == 0 && show >= 10)
				{
					///控制每行结尾处的换行
					if (show == end)
					{
						cout << i ;
					}
					else
					{
						cout << i << "\n";
					}
					
				}
				else
				{
					cout << i <<' ';
				}
				show++;
			}
			///到第几个结束
			if (count >= end)
			{
				break;
			}
		}
	}
}

bool _1013::isprime(int number)
{
	bool flag = true;
	if (number%2==0)
	{
		flag = false;
		return flag;
	}
	int sqrtNumber = sqrt(number);
	for (int i = 2; i <= sqrtNumber; i++)
	{
		///嫩被1与自身以外的数整除，索命不是素数
		if (number % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

_1013::~_1013()
{
}
///未完成提交版
//#include<iostream>
//#include<string>
//#include<malloc.h>
//#include <algorithm>
//#include <math.h>
//#include <iomanip>//用于cout的输出控制
//using namespace std;
//bool isprime(int number) {
//
//	bool flag = true;
//	if (number % 2 == 0)
//	{
//		flag = false;
//		return flag;
//	}
//	int sqrtNumber = sqrt(number);
//	for (int i = 2; i <= sqrtNumber; i++)
//	{
//		///嫩被1与自身以外的数整除，索命不是素数
//		if (number % i == 0)
//		{
//			flag = false;
//			break;
//		}
//	}
//	return flag;
//}
//int main() {
//	int start, end;
//	cin >> start >> end;
//	int count = 0, show = 0;
//	for (int i = 1; count < 10000; i++)
//	{
//		///如果是个素数
//		if (isprime(i))
//		{
//			count++;
//			///是个以上数字才进行换行输出 
//			if (show % 10 == 0 && show >= 10)
//			{
//				cout << "\n";
//			}
//			///从第几个素数开始输出
//			if (count >= start)
//			{
//
//				if ((show + 1) % 10 == 0 && (show + 1) >= 0)
//				{
//					cout << i << ' ';
//				}
//				cout << i;
//				show++;
//			}
//			///到第几个结束
//			if (count >= end)
//			{
//				break;
//			}
//		}
//	}
//}