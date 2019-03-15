#include "pch.h"
#include "_1010.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
using namespace std;

_1010::_1010()
{
	int coefficient, index;
	int flag = 1;
	while (cin >> coefficient >> index ) {
		if (index > 0)
		{
			if (flag==1)
			{
				cout << coefficient * index << ' ' << index - 1;
				flag = 0;
			}
			else
			{
				cout << ' ' << coefficient * index << ' ' << index - 1;
			}
		}

	}
	if (flag)
	{
		cout << "0 0";
	}
}


_1010::~_1010()
{
}
///Ìá½»°æ±¾
//#include<iostream>
//#include<string>
//#include<malloc.h>
//#include <algorithm>
//using namespace std;
//main() {
//	int coefficient, index;
//	int flag = 1;
//	while (cin >> coefficient >> index) {
//		if (index > 0)
//		{
//			if (flag == 1)
//			{
//				cout << coefficient * index << ' ' << index - 1;
//				flag = 0;
//			}
//			else
//			{
//				cout << ' ' << coefficient * index << ' ' << index - 1;
//			}
//		}
//
//	}
//	if (flag)
//	{
//		cout << "0 0";
//	}
//}
