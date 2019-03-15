#include "pch.h"
#include "_1037.h"

//如果你是哈利·波特迷，你会知道魔法世界有它自己的货币系统 —— 就如海格告诉哈利的：
//“十七个银西可(Sickle)兑一个加隆(Galleon)，二十九个纳特(Knut)兑一个西可，很容易。”
//现在，给定哈利应付的价钱 P 和他实付的钱 A，你的任务是写一个程序来计算他应该被找的零钱。
//
//输入格式：
//
//输入在 1 行中分别给出 P 和 A，格式为 Galleon.Sickle.Knut，其间用 1 个空格分隔。这里 Galleon 是[0, 10
//7
//] 区间内的整数，Sickle 是[0, 17) 区间内的整数，Knut 是[0, 29) 区间内的整数。
//
//输出格式：
//
//在一行中用与输入同样的格式输出哈利应该被找的零钱。如果他没带够钱，那么输出的应该是负数。
//
//输入样例 1：
//
//10.16.27 14.1.28
//输出样例 1：
//
//3.2.1
//输入样例 2：
//
//14.1.28 10.16.27
//输出样例 2：
//
//- 3.2.1

/*
进制转化问题
先化为总的 相减 再化回来
*/

struct countMoney
{
	int Galleon;
	int Sickle;
	int Knut;
};

_1037::_1037()
{
	//默认无进位
	bool flag = false;

	countMoney P ,A;

	//输入两个string 再进行分割
	
	//scanf("%d.%d.%d",&Galleon,&Sickle,&Knut);
	int Pcount, Acount;
	cin >> P.Galleon;
	getchar();
	cin >> P.Sickle;
	getchar();
	cin >> P.Knut;
	Pcount = P.Galleon * 17 * 29 + P.Sickle * 29 + P.Knut;
	//scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
	cin >> A.Galleon;
	getchar();
	cin >> A.Sickle;
	getchar();
	cin >> A.Knut;
	Acount = A.Galleon * 17 * 29 + A.Sickle * 29 + A.Knut;

	int difference =Acount - Pcount;

	if (difference > 0)
	{
		cout << difference / (17 * 29)<<"." << difference / 29 % 17 <<"."<< difference % 29;
	}
	else if (difference < 0)
	{
		cout <<  difference / (17 * 29) <<"." <<abs( difference / 29 % 17)<<"." <<abs( difference % 29);
	}

}


_1037::~_1037()
{
}

//答案提交版 第六个点未过
//#include<iostream>
//#include<string>
//#include<malloc.h>//申请自动的空间
//#include <algorithm>//一些常用的算法
//#include<vector> //表示向量
//#include <iomanip>//用于cout的输出控制
//using namespace std;
//
//struct countMoney
//{
//	int Galleon;
//	int Sickle;
//	int Knut;
//};
//int main() {
//	countMoney P, A;
//	//输入两个string 再进行分割
//	//scanf("%d.%d.%d",&Galleon,&Sickle,&Knut);
//	int Pcount, Acount;
//	cin >> P.Galleon;
//	getchar();
//	cin >> P.Sickle;
//	getchar();
//	cin >> P.Knut;
//	Pcount = P.Galleon * 17 * 29 + P.Sickle * 29 + P.Knut;
//	//scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
//	cin >> A.Galleon;
//	getchar();
//	cin >> A.Sickle;
//	getchar();
//	cin >> A.Knut;
//	Acount = A.Galleon * 17 * 29 + A.Sickle * 29 + A.Knut;
//
//	int difference = Acount - Pcount;
//
//	if (difference > 0)
//	{
//		cout << difference / (17 * 29) << "." << difference / 29 % 17 << "." << difference % 29;
//	}
//	else if (difference < 0)
//	{
//		cout << difference / (17 * 29) << "." << abs(difference / 29 % 17) << "." << abs(difference % 29);
//	}
//}
