#include "pch.h"
#include "_1027.h"


_1027::_1027()
{
	int number;
	string sign;
	cin >> number >> sign;
	int controller[100];
	int max = 0;
	//找最大的基数
	for (int  i = number; i > 0; i--)
	{
		if (i%2!=0)
		{
			max = i;
			break;
		}
	}
	///剩下的多余符号
	
	int half = max / 2;
	int sub = 0;
	int countToHalf = 1;
	while (half >= countToHalf)
	{
		controller[sub++] = countToHalf;
		countToHalf += 2;
	}
	int sum = 0;
	int good[100];
	int space[100];
	int goodflag = 0;
	for (int i = 0; i < sub-1; i++)
	{
		if (sum < half)
		{
			sum += controller[i];
			goodflag = i;
		}
		else
		{
			break;
		}
	}
	int goodsub = goodflag;
	int goodcount = 0;

	for (int i = 0; i <= goodflag; i++)
	{
		space[i] = i;
		good[i] = controller[goodsub--];
		goodcount++;
		
	}
	int spaceNum = goodflag-1;
	for (int i = 1; i <= goodflag; i++)
	{
		good[goodcount] = controller[i]; 
		space[goodcount] = spaceNum;
		spaceNum--;
		goodcount++;
	}
	int count = 0;
	for (int i = 0; i < goodcount; i++)
	{
		string outsign, spaceString = "", signString;
	
		//处理空格
		for (int k = 0; k < space[i]; k++)
		{
			spaceString += " ";
		}
		//处理符号
		for (int j = 0; j < good[i]; j++)
		{
			signString += sign;
			count++;
		}

		outsign = spaceString + signString;
	
		cout << outsign << "\n";
		
		
	}
	cout << number - count;
}


_1027::~_1027()
{
}
