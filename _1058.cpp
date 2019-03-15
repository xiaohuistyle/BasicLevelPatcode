#include "pch.h"
#include "_1058.h"

struct problemS
{
	int goodScore;
	int optionNum;
	int trueOptionNum;
	char option[5];
};
struct answerS
{
	int num;
	char option[5];
};

_1058::_1058()
{
	int N, M;
	cin >> N >> M;
	vector<problemS> list;
	for (int i = 0; i < M; i++)
	{
		problemS temp;
		cin >> temp.goodScore >> temp.optionNum >> temp.trueOptionNum;
		for (int j = 0; j < temp.trueOptionNum; j++)
		{
			cin>>temp.option[j];
		}
		list.push_back(temp);
	}
	getchar();//Œ¸ ’/n
	vector<answerS> answer;
	answerS temp;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		char inputString[1000];
		fgets(inputString, 1000, stdin);
		int len = strlen(inputString);
		for (int j = 0; j < len; j++)
		{
			if (inputString[j]!='('&&inputString[j]!=')')
			{
				
				if (inputString[j]-'0' < 5 && inputString[j]-'0' > 0)
				{
					temp.num = inputString[j] - '0';
				}
				else if (inputString[j]>='a'&&inputString[j]<='z')
				{
					if (count <= temp.num -1)
					{
						temp.option[count++] = inputString[j];
					}
				}
			}
			else if (inputString[j] == ')')
			{
				answer.push_back(temp);
				count = 0;
			}
		}
	}
	//int count = 1;
	int size = 0;
	int score[100] = { 0 };
	for (int i = 0; i < N * M; i++)//Õ≥º∆
	{
		if (count>4)
		{
			size = count / M;

		}
		score[(i - size * M) % M]++;
		count++;
	}








}


_1058::~_1058()
{
}
