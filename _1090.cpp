#include "pch.h"
#include "_1090.h"
struct goodS
{
	string A;
	string B;
};
struct containerS
{
	int num;
	vector<string> goods;
};
bool isGood(vector<goodS> mutualList, containerS temp) {
	bool AFlag = false, BFlag = false;
	for (int i = 0; i < temp.goods.size(); i++)
	{
		
		if (mutualList[i].A == temp.goods[i])//这个单子种有A
		{
			AFlag = true;
		}
		else if(mutualList[i].B == temp.goods[i])//这个单子种有B
		{
			BFlag = true;
		}
		if (AFlag && BFlag && i == temp.goods.size()-1)//如果两种都有 则是对的
		{
			return true;
		}
	}
	return false;
}


_1090::_1090()
{
	int N, M;
	cin >> N >> M;
	vector<goodS> mutualList;
	for (int i = 0; i < N; i++)
	{
		goodS temp;
		cin >> temp.A >> temp.B;
		mutualList.push_back(temp);
	} 
	vector<containerS> containerList;
	for (int i = 0; i < M; i++)
	{
		containerS temp;
		cin >> temp.num;
		for (int i = 0; i < temp.num; i++)
		{
			string tempSt;
			cin >> tempSt;
			temp.goods.push_back(tempSt);
		}
		containerList.push_back(temp);
	}
	for (int i = 0; i < M; i++)
	{
		
		if (isGood(mutualList, containerList[i]))
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";

		}
		if (i != M-1)
		{
			cout << "\n";
		}
	}
}


_1090::~_1090()
{
}
