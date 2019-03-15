#include "pch.h"
#include "_1029.h"


_1029::_1029()
{
	string goodString, badString;
	cin >> goodString >> badString;
	for (int i = 0; i < goodString.length(); i++)
	{
		for (int j = 0; j < badString.length(); j++)
		{

			
			if (goodString[i] == badString[j])
			{
				goodString[i] = '0';
				break;
			}
		}
	}
	///进行去重
	string outString;
	char stmp;
	for (int i = 0; i < goodString.length(); i++)
	{
		stmp = goodString[i];
		outString+= stmp;
		//修改后面的所有相同的字符 保证此类字符再加入不到输出字符串中
		for (int j = 0; j < goodString.length(); j++)
		{
			if (stmp==goodString[j] || (int)stmp==goodString[j]-32 || (int)stmp==goodString[j]+32 )
			{
				goodString[j] = '0';
				
			}
		}
	}


	for (int i = 0; i < outString.length(); i++)
	{
		if (outString[i]- '0' != 0)
		{
			///大小写字母之间的ascII是32 小写字母范围是97-122 大写字母范围是65-90
			if (outString[i]>= 'a' && outString[i]  <= 'z')
			{
				cout << (char)(outString[i] + ('A' - 'a'));
			}
			else
			{
				cout << outString[i];
			}
			
		}
	}

}


_1029::~_1029()
{
}
