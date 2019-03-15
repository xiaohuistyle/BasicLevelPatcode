#include "pch.h"
#include "_1053.h"


struct condition
{
	int K;
	double data[100];
};

_1053::_1053()
{
	int N, D;
	double e;
	cin >> N >> e >> D;
	vector<condition> list;
	double possibleCount = 0, count = 0;
	for (int i = 0; i < N; i++)
	{
		condition temp;
		cin >> temp.K;
		int tempCount = 0;
		for (int j = 0; j < temp.K; j++)
		{
			cin >> temp.data[j];
			if (temp.data[j] < e)
			{
				tempCount++;
			}
		}
		if (tempCount > temp.K/2)
		{
			possibleCount++;
		}
		if (tempCount > temp.K / 2 && temp.K > D)
		{
			possibleCount--;
			count++;
		}
		list.push_back(temp);
	}
	printf("%4.1lf%% %4.1lf%%",possibleCount /( N*1.0) * 100, count / (N*1.0) * 100);
}


_1053::~_1053()
{
}
