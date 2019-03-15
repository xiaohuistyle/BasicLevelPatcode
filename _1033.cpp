#include "pch.h"
#include "_1033.h"
//旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。
//现在给出应该输入的一段文字、以及坏掉的那些键，打出的结果文字会是怎样？
//输入格式：
//输入在 2 行中分别给出坏掉的那些键、以及应该输入的文字。其中对应英文字母的坏键以大写给出；每段文字是不超过 10^5
//个字符的串。可用的字符包括字母[a - z, A - Z]、数字 0 - 9、以及下划线 _（代表空格）、, 、.、 - 、 + （代表上档键）。题目保证第 2 行输入的文字串非空。
//
//注意：如果上档键坏掉了，那么大写的英文字母无法被打出。
//输出格式：
//
//在一行中输出能够被打出的结果文字。如果没有一个字符能被打出，则输出空行。

//输入样例：
//
//7 + IE.
//7_This_is_a_test.
//
//输出样例：
//
//_hs_s_a_tst

/*
分析：
第一：上档键坏掉了，大写的英文字母不能被输出，连此字符为大写转化的小写也不行 如 T
第二：根据第一行给出的英文，因为是坏掉的，第二行无论给出大小写，均不能输出 如 ie或者IE
第三：在范围内输出
*/


_1033::_1033()
{

	string OneInput, twoInput;
	cin >> OneInput >> twoInput;
	for (int i = 0; i < OneInput.length(); i++)
	{
		//先对上档键做修改
		if (OneInput[i]=='+')
		{
			for (int j = 0; j < twoInput.length(); j++)
			{
				///如果是大写字母，我就让他制空
				if (twoInput[j] >= 'A' && twoInput[j] <= 'Z')
				{
					twoInput[j] = ' ';
				}
			}
		}
		else
		{
			//大写转小写
			for (int j = 0; j < twoInput.length(); j++)
			{
				//如果他俩直接相等 则直接赋予空值
				if (OneInput[i] == twoInput[j]) //主要针对符号
				{
					twoInput[j] = ' ';
				}
				//如果是大写 或者 小写 则需要把 1.大写对应的 大写和小写 2.小写对应的大写和小写均赋予空值
				//第一种情况
				if (OneInput[i]>='A' && OneInput[i]<='Z')
				{
					//如果大写等于大写
					if (OneInput[i]==twoInput[j])
					{
						twoInput[j] = ' ';
					}
					else if (OneInput[i]-'A' == twoInput[j]- 'a')//如果大写等于对应的小写
					{
						twoInput[j] = ' ';
					}
				}
				else if(OneInput[i] >= 'a' && OneInput[i] <= 'z')
				{
					//如果小写等于小写
					if (OneInput[i] == twoInput[j])
					{
						twoInput[j] = ' ';
					}
					else if (OneInput[i]- 'A' == twoInput[j] - 'a' )//如果小写等于对应的大写
					{
						twoInput[j] = ' ';
					}
				}
			}
		}
		
	}
	for (int i = 0; i < twoInput.length(); i++)
	{
		if (twoInput[i]!=' ')
		{
			cout << twoInput[i];
		}
	}

}


_1033::~_1033()
{
}
//提交版代码 一个点未过
//#include<iostream>
//#include<string>
//#include<malloc.h>//申请自动的空间
//#include <algorithm>//一些常用的算法
//#include<vector> //表示向量
//#include <iomanip>//用于cout的输出控制
//using namespace std;
//int main() {
//
//	string OneInput, twoInput;
//	cin >> OneInput >> twoInput;
//	for (int i = 0; i < OneInput.length(); i++)
//	{
//		//先对上档键做修改
//		if (OneInput[i] == '+')
//		{
//			for (int j = 0; j < twoInput.length(); j++)
//			{
//				///如果是大写字母，我就让他制空
//				if (twoInput[j] >= 'A' && twoInput[j] <= 'Z')
//				{
//					twoInput[j] = ' ';
//				}
//			}
//		}
//		else
//		{
//			//大写转小写
//			for (int j = 0; j < twoInput.length(); j++)
//			{
//				//如果他俩直接相等 则直接赋予空值
//				if (OneInput[i] == twoInput[j]) //主要针对符号
//				{
//					twoInput[j] = ' ';
//				}
//				//如果是大写 或者 小写 则需要把 1.大写对应的 大写和小写 2.小写对应的大写和小写均赋予空值
//				//第一种情况
//				if (OneInput[i] >= 'A' && OneInput[i] <= 'Z')
//				{
//					//如果大写等于大写
//					if (OneInput[i] == twoInput[j])
//					{
//						twoInput[j] = ' ';
//					}
//					else if (OneInput[i] - 'A' == twoInput[j] - 'a')//如果大写等于对应的小写
//					{
//						twoInput[j] = ' ';
//					}
//				}
//				else if (OneInput[i] >= 'a' && OneInput[i] <= 'z')
//				{
//					//如果小写等于小写
//					if (OneInput[i] == twoInput[j])
//					{
//						twoInput[j] = ' ';
//					}
//					else if (OneInput[i] - 'A' == twoInput[j] - 'a')//如果小写等于对应的大写
//					{
//						twoInput[j] = ' ';
//					}
//				}
//			}
//		}
//
//	}
//	for (int i = 0; i < twoInput.length(); i++)
//	{
//		if (twoInput[i] != ' ')
//		{
//			cout << twoInput[i];
//		}
//	}
//
//
//
//	return 0;
//}