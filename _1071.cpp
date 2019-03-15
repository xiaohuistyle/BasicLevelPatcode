#include "pch.h"
#include "_1071.h"

struct turnS
{
	int n1;
	int b;
	int t;
	int n2;
};

_1071::_1071()
{
	int T, K;
	cin >> T >> K;
	vector<turnS> list;
	for (int i = 0; i < K; i++)
	{
		turnS temp;
		cin >> temp.n1 >> temp.b >> temp.t >> temp.n2;
		list.push_back(temp);
	}
	vector<string> answerList;
	for (int i = 0; i < K; i++)
	{
		if (T >= list[i].t)
		{
			if (list[i].b==1)//如果赌大
			{
				if (list[i].n1<list[i].n2)//如果赢了
				{
					T += list[i].t;
					string win = "Win " + to_string(list[i].t) +"! Total = " + to_string(T) + ".";

					answerList.push_back(win);
				}
				else
				{
					T -= list[i].t;
					string lose = "Lose " + to_string(list[i].t) +". Total = " + to_string(T) + ".";
					answerList.push_back(lose);
				}
			}
			else//如果赌小
			{
				if (list[i].n1 > list[i].n2)//如果赢了
				{
					T += list[i].t;
					string win = "Win " + to_string(list[i].t) +"! Total = " + to_string(T) + ".";
					answerList.push_back(win);
				}
				else
				{
					T -= list[i].t;
					string lose = "Lose " + to_string(list[i].t) +". Total = " + to_string(T) + ".";
					answerList.push_back(lose);
				}
			}
		}
		else if (T==0)//如果输光了
		{
			string  GameOver = "Game Over.";
			answerList.push_back(GameOver);
			break;

		}
		else//如果不够玩一局
		{
			string NotEnough = "Not enough tokens. Total = "+ to_string(T) +".";
			answerList.push_back(NotEnough);
		}
	}
	for (int i = 0; i < answerList.size(); i++)
	{
		cout << answerList[i];
		if (i != answerList.size()-1)
		{
			cout << "\n";
		}
		

	}



}


_1071::~_1071()
{
}
