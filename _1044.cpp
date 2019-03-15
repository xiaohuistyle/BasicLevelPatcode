#include "pch.h"
#include "_1044.h"


_1044::_1044()
{
	string marsUnit[13] = { "tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec" };
	string marsdecade[13] = {"", "tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou" };
	int N;
	cin >> N;
	getchar();
	for (int i = 0; i < N; i++)
	{
		char line[11];
		fgets(line, 11, stdin);
		if (isdigit(line[0]))//如果是数字
		{
			int linelen = strlen(line);
			int all=0;
			for (int i = 0; i < linelen-1; i++)//字符转化为数字
			{
				all += ( line[i] - '0') * pow(10, linelen - 2 - i);
			}
			if (all<13)
			{
				cout << marsUnit[all % 13];
			}
			else
			{
				cout << marsdecade[all / 13] << " " << marsUnit[all % 13];
			}
		}
		else if(isalpha(line[0]))//如果是字母
		{
			int linelen = strlen(line);
			int all = 0;
			string stmp = line;
			string decade = stmp.substr(0, 3);
			string unit = stmp.substr(4, 3);
			for (int i = 0; i < 12; i++)
			{
				if (decade == marsdecade[i])
				{
					all += i * 13;
					break;
				}
			}
			for (int i = 0; i < 13; i++)
			{
				if (unit == marsUnit[i])
				{
					all += i  ;
					break;
				}
			}
			cout << all;
		}
		if (i!=N-1)
		{
			cout << "\n";
		}
	}

}


_1044::~_1044()
{
}
