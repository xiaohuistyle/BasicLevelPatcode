#include "pch.h"
#include "_1011.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
using namespace std;

_1011::_1011()
{

	///一个int占四个字节，一个字节是8位，所以一个int可以放2^32次方的数，刚刚符合题目的要求,但是会出现边界错误，用long就不报
	int T;
	cin >> T;
	int case_number = 1;
	long A;
	long B;
	long C;
	while (T--)
	{
		cin >> A;
		cin >> B;
		cin >> C;
		if (A + B > C)
		{
			cout << "Case #" << case_number << ": true" << endl;
		}
		else {
			cout << "Case #" << case_number << ": false" << endl;
		}
		case_number++;
	}


}


_1011::~_1011()
{
}
///提交版
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//	int case_number = 1;
//	long A;
//	long B;
//	long C;
//	while (T--)
//	{
//		cin >> A;
//		cin >> B;
//		cin >> C;
//		if (A + B > C)
//		{
//			cout << "Case #" << case_number << ": true" << endl;
//		}
//		else {
//			cout << "Case #" << case_number << ": false" << endl;
//		}
//		case_number++;
//	}
//	return 0;
//}
