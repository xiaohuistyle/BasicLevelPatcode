#include "pch.h"
#include "_1069.h"


bool isAward(string temp, vector<string> award) {
	for (int i = 0; i < award.size(); i++)
	{
		if (temp== award[i])
		{
			return true;
		}
	}
	return false;
}


_1069::_1069()
{
	int M, N, S;
	cin >> M>> N>>S;
	string list[1000];
	for (int i = 0; i < M; i++)
	{
		cin >> list[i];
	}
	int outSub = S;
	vector<string> award;
	int count = 0;
	int outNUM = (M - S) / N;
	do
	{
		
		if (isAward(list[outSub - 1], award))
		{
			
			if (outSub < M)
			{
				cout << list[outSub];
			}
			else
			{
				break;
			}
		}
		else
		{
			cout<< list[outSub - 1];
			award.push_back(list[outSub - 1]);
		}
		
		if (outSub+N-1 >= M)//这个值是否大于等于边界
		{
			break;
		}
		if (count < outNUM)
		{
			count++;
			cout << "\n";
		}
		
		outSub += N;

	} while (outSub<=M);

	if (count==0)
	{
		cout << "Keep going...";
	}
	
	



}


_1069::~_1069()
{
}
