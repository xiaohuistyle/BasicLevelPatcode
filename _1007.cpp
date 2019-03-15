#include "pch.h"
#include "_1007.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
using namespace std;

_1007::_1007()
{

	int n;
	cin >> n;
	int sum=0;
	///找到此序列中最大的素数
	if (n%2==0)
	{
		n = n - 1;
	}
	for (int i = n; i > 3; i-=2)
	{
		if (isprime(i)&&isprime(i-2))
		{
			sum++;
		}
	}
	cout << sum;
}

bool _1007::isprime(int a)
{
	bool flag = true;
	int sqrtA = sqrt(a);
	for (int  i = 2; i <= sqrtA; i++)
	{
		if (a % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}


_1007::~_1007()
{
}
///平台提交版
//#include<iostream>
//#include<string>
//#include<malloc.h>
//#include<math.h>
//#include <algorithm>
//using namespace std;
//bool isprime(int a) {
//
//	bool flag = true;
//	int sqrtA = sqrt(a);
//	for (int i = 2; i <= sqrtA; i++)
//	{
//		if (a % i == 0)
//		{
//			flag = false;
//			break;
//		}
//	}
//	return flag;
//
//
//}
//int main() {
//	int n;
//	cin >> n;
//	int sum = 0;
//	///找到此序列中最大的素数
//	if (n % 2 == 0)
//	{
//		n = n - 1;
//	}
//	for (int i = n; i > 3; i -= 2)
//	{
//		if (isprime(i) && isprime(i - 2))
//		{
//			sum++;
//		}
//	}
//	cout << sum;
//}



