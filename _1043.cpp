#include "pch.h"
#include "_1043.h"


_1043::_1043()
{
	char patest[6] = { 'P', 'A','T','e','s','t' };
	char inputString[1000];
	gets_s(inputString);
	int len = strlen(inputString);
	int length = len;
	int num[6] = { 0 };
	while (--length)
	{
		switch (inputString[length])
		{
		case 'P':num[0]++; break;
		case 'A':num[1]++; break;
		case 'T':num[2]++; break;
		case 'e':num[3]++; break;
		case 's':num[4]++; break;
		case 't':num[5]++; break;
		default:
			break;
		}
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (num[j]>0)
			{
				cout << patest[j];
				num[j]--;
			}
			continue;
		}
	}
	



}


_1043::~_1043()
{
}
