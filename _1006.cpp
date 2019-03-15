#include "pch.h"
#include "_1006.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
using namespace std;
_1006::_1006()
{
	int n;
	cin >> n;
	int hundredNum = n / 100;
	int decadeNum = n % 100 / 10;
	int singleNum = n % 100 % 10;
	for (int i = 0; i < hundredNum; i++)
	{
		cout << 'B';
	}
	for (int i = 0; i < decadeNum; i++)
	{
		
		cout << 'S';
	}
	for (int i = 1; i <= singleNum; i++)
	{
		cout << i;

	}


}


_1006::~_1006()
{
}
///Ìá½»´ð°¸
//#include<iostream>
//#include<string>
//#include<malloc.h>
//#include <algorithm>
//using namespace std;
//int main() {
//
//	int n;
//	cin >> n;
//	int hundredNum = n / 100;
//	int decadeNum = n % 100 / 10;
//	int singleNum = n % 100 % 10;
//	for (int i = 0; i < hundredNum; i++)
//	{
//		cout << 'B';
//	}
//	for (int i = 0; i < decadeNum; i++)
//	{
//
//		cout << 'S';
//	}
//	for (int i = 1; i <= singleNum; i++)
//	{
//		cout << i;
//
//	}
//
//	return 0;
//
//}


