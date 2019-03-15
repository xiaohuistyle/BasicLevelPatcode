#include "pch.h"
#include "_1036.h"

//
//美国总统奥巴马不仅呼吁所有人都学习编程，甚至以身作则编写代码，成为美国历史上首位编写计算机代码的总统。
//2014 年底，为庆祝“计算机科学教育周”正式启动，奥巴马编写了很简单的计算机代码：在屏幕上画一个正方形。
//现在你也跟他一起画吧！
//
//输入格式：
//
//输入在一行中给出正方形边长 N（3≤N≤20）和组成正方形边的某种字符 C，间隔一个空格。
//
//输出格式：
//
//输出由给定字符 C 画出的正方形。但是注意到行间距比列间距大，所以为了让结果看上去更像正方形，
//我们输出的行数实际上是列数的 50 % （四舍五入取整）。


//输入样例：
//
//10 a
//输出样例：
//
//aaaaaaaaaa
//a        a
//a        a
//a        a
//aaaaaaaaaa

/*
主要是对横向输出行数 和 纵向 输出行数的 确定
横向的两行 需要第二行确定  Y 轴坐标
而 纵向 的 需要我确定 一个 X周坐标 其余的均为空
//根据题意 不可使用矩阵 所以 是错的
//那么只能控制行列进行输出了

*/
_1036::_1036()
{
	int brim;
	string	 filler;
	cin >> brim >> filler;
	//设定一个二维数组充当矩阵

	int rows;
	if (brim % 2 == 0)
	{
		rows = brim / 2;
	}
	else
	{
		rows = brim / 2 + 1;
	}

	for (int i = 0; i < rows; i++)
	{
		if (i == 0 || i == rows - 1)//对行进行判断 要是第一行和最后一行则进行全输出
		{
			for (int j = 0; j < brim; j++)
			{
				cout << filler;
			}
			if (i != rows - 1)
			{
				cout << "\n";
			}
			
		}
		else//
		{
			for (int k = 0; k < brim; k++)
			{
				if (k == 0 || k == brim - 1)//否则，仅对第一列和第二列进行输出
				{
					cout << filler;
				}
				else
				{
					cout << " ";
				}
			}
			cout << "\n";
		}
	}
}


_1036::~_1036()
{
}
//提交版 全部通过测试点
//#include<iostream>
//#include<string>
//#include<malloc.h>//申请自动的空间
//#include <algorithm>//一些常用的算法
//#include<vector> //表示向量
//#include <iomanip>//用于cout的输出控制
//using namespace std;
//int main() {
//
//	int brim;
//	string	 filler;
//	cin >> brim >> filler;
//	//设定一个二维数组充当矩阵
//
//	int rows;
//	if (brim % 2 == 0)
//	{
//		rows = brim / 2;
//	}
//	else
//	{
//		rows = brim / 2 + 1;
//	}
//
//	for (int i = 0; i < rows; i++)
//	{
//		if (i == 0 || i == rows - 1)//对行进行判断 要是第一行和最后一行则进行全输出
//		{
//			for (int j = 0; j < brim; j++)
//			{
//				cout << filler;
//			}
//			if (i != rows - 1)
//			{
//				cout << "\n";
//			}
//
//		}
//		else//
//		{
//			for (int k = 0; k < brim; k++)
//			{
//				if (k == 0 || k == brim - 1)//否则，仅对第一列和第二列进行输出
//				{
//					cout << filler;
//				}
//				else
//				{
//					cout << " ";
//				}
//			}
//			cout << "\n";
//		}
//	}
//
//
//
//}

