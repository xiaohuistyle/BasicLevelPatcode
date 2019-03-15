#include "pch.h"
#include "_1032.h"
typedef struct school
{
	int number;
	int score;
};

_1032::_1032()
{
	int N;
	cin >> N;
	school information[100];
	for (int i = 0; i < N; i++)
	{
		cin >> information[i].number >> information[i].score;
	}
	int type[100];
	///因为是顺序编号，那么求最大的即可
	int Max = 0;
	for (int i = 0; i < N; i++)
	{
		if (Max<=information[i].number)
		{
			Max = information[i].number;
		}
	}
	int outArray[100];
	///遍历查找 累计求和
	for (int i = 1; i <= Max; i++)
	{
		outArray[i] = 0;
		for (int j = 0; j < N; j++)
		{
			if (information[j].number == i)
			{
				outArray[i] += information[j].score;
			}
		}
	}
	int maxFlag = 1;
	for (int i = 0; i < Max; i++)
	{
		if (outArray[maxFlag] <= outArray[i])
		{
			maxFlag = i;
		}
	}
	cout << maxFlag << ' ' << outArray[maxFlag];


}


_1032::~_1032()
{
}
