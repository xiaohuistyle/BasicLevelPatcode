#include "pch.h"
#include "_1014.h"
#include "_1014.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
#include <iomanip>//用于cout的输出控制
using namespace std;

_1014::_1014()
{
	const char *DAY[] = { "MON", "TUE","WED","THU","FRI","SAT","SUN"};
	//char one[60], two[60], three[60], four[60];
	char inputstring[4][60];
	for (int i = 0; i < 4; i++)
	{
		cin >> inputstring[i];
	}
	int onelength = 0;;
	int zerolen = strlen(inputstring[0]);
	int onelen = strlen(inputstring[1]);
	if (zerolen >= onelen)
	{
		onelength = zerolen;
	}
	else
	{
		onelength = onelen;
	}
	int flag = 0;
	for (int i = 0; i < onelength; i++)
	{
		///如果这两个字符串都没有结尾
		if (inputstring[0][i]!='\0'&&inputstring[1][i] != '\0')
		{
			///进行第一个的匹配 如果进行匹配成功
			if (inputstring[0][i]== inputstring[1][i])
			{
				///仅确定大写字母的范围
				if (int(inputstring[0][i])>= int('A')&& int(inputstring[0][i]) <= int('Z'))
				{
					flag++;
					///如果找到了第一个 确定日期
					int place = int(inputstring[0][i]) - int('A');
					if (flag == 1)
					{
						cout << DAY[place % 7] << ' ';
					}
					///如果找到了第二个 如果出错就要注意这里的0-9 确定小时
					if (flag == 2)
					{
						cout << place + 10<< ":";
					}
				}
			}
		}
	}
	int twolength = 0;;
	int twolen = strlen(inputstring[2]);
	int threelen = strlen(inputstring[3]);
	if (twolen >= threelen)
	{
		twolength = twolen;
	}
	else
	{
		twolength = threelen;
	}
	for (int i = 0; i < twolength; i++)
	{
		if (inputstring[2][i] != '\0' && inputstring[3][i] != '\0')
		{
			if (inputstring[2][i] == inputstring[3][i])
			{
				if (int(inputstring[2][i]) >= int('A') && int(inputstring[2][i]) <= int('Z') || int(inputstring[2][i]) >= int('a') && int(inputstring[2][i]) <= int('z'))
				{
					if (i<10)
					{
						cout <<'0'<<i;
					}
					else
					{
						cout << i;
					}
					
				}
			}
		}
	}
}


_1014::~_1014()
{
}
