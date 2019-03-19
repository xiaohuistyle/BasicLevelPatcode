#include "pch.h"
#include "_1078.h"
string decompress(string input) {
	string result="";
	for (int i = 0; i < input.length(); i++)
	{
		if ((input[i] - '0' >= 0 && input[i] - '0' <= 9) && (input[i + 1] - '0' >= 0 && input[i + 1] - '0' <=9))
		{
			int count = (input[i]-'0' )* 10 + input[i+1]-'0';
			for (int j = 1; j < count; j++)
			{
				result += input[i + 2];
			}
		}else if ((input[i]-'0'>=0&&input[i]-'0'<=9))//如果是数字 并且下一位不是数字
		{
			//重复下一位的字母数字次
			for (int j = 1; j < input[i] - '0'; j++)
			{
				result += input[i + 1];
			}
		}
		else if(input[i] == ' ')
		{
			//如果是空格 就自加
			result += ' '; 
		}
		else
		{
			result += input[i];
		}
		
	}
	return result;
}

string compress(string input) {
	string result = "";
	for (int i = 0; i < input.length(); i++)
	{
		int count = 0;
		
		
		for (int j = i+1; j < input.length(); j++)
		{
			if (input[i]==input[j])
			{
				count++;
			}
			else
			{
				i += count;
				break;
			}
		}
		if (count==0)
		{
			result += input[i];
		}
		else
		{
			result += to_string(count + 1);
			result += input[i];
		}
		
	}
	return result;
}

_1078::_1078()
{
	char style;
	cin >> style;
	getchar();
	string inputString;
	getline(cin,inputString);//使用c++中的getline cin.getline(char*,int)用处处理数组字符串
	string result;
	switch (style)
	{
	case 'D':result = decompress(inputString); break;
	case 'C':result = compress(inputString); break;
	default:
		break;
	}
	cout << result;
}


_1078::~_1078()
{
}
