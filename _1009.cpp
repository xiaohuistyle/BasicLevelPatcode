#include "pch.h"
#include "_1009.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
//#include<cstdio>
//#include<cstring>
using namespace std;

_1009::_1009()
{
	char sentence[80];
	char *a =fgets(sentence, 80, stdin);
	//gets_s(sentence);
	//cin >> sentence;
	int length =strlen( sentence);
	int place[80];
	int j = 0;
	for (int i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] == ' ')
		{
			place[j] = i;
			j++;
		}
	}
	string word[80];
	int temp=0;
	///现在知道位置了，进行字符数组的设置 单词个数等于空格数加一
	for (int i = 0; i < j + 1; i++)
	{
		///这里比较复杂，打断点调试即可知道为什么
		for (int k = temp; k < length; k++)
		{
			word[i] += sentence[k];
			if (place[i]==k)
			{
				temp = k + 1;
				break;
			}
		}
	}

	for (int i = j; i >= 0; i--)
	{
		if (i==0)
		{
			cout << word[i].substr(0,word[i].length()-1);
		}
		else if (i==j)
		{
			cout << word[i].substr(0, word[i].length() - 1) <<  ' ';
		}
		else
		{
			cout << word[i];
		}
		
	}



}


_1009::~_1009()
{
}
///平台提交版 只有12分，两个测试点没过，不知道原因出在哪里
//#include<iostream>
//#include<string>
//#include<malloc.h>
//#include <algorithm>
//#include<cstring>
//#include <cstdio>
//#include <ctype.h>
//using namespace std;
//int main() {
//
//
//	char sentence[80];
//	char *a = fgets(sentence, 800, stdin);
//	//gets_s(sentence);
//	//cin >> sentence;
//	int length = strlen(sentence);
//	int place[80];
//	int j = 0;
//	for (int i = 0; sentence[i] != '\0'; i++)
//	{
//		if (sentence[i] == ' ')
//		{
//			place[j] = i;
//			j++;
//		}
//	}
//	string word[80];
//	int temp = 0;
//	///现在知道位置了，进行字符数组的设置 单词个数等于空格数加一
//	for (int i = 0; i < j + 1; i++)
//	{
//		///这里比较复杂，打断点调试即可知道为什么
//		for (int k = temp; k < length; k++)
//		{
//			word[i] += sentence[k];
//			if (place[i] == k)
//			{
//				temp = k + 1;
//				break;
//			}
//		}
//	}
//
//	for (int i = j; i >= 0; i--)
//	{
//		if (i == 0)
//		{
//			cout << word[i].substr(0, word[i].length() - 1);
//		}
//		else if (i == j)
//		{
//			cout << word[i].substr(0, word[i].length() - 1) << ' ';
//		}
//		else
//		{
//			cout << word[i];
//		}
//
//	}
//
//
//}
