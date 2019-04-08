#include "pch.h"
#include "_1092.h"

struct outS
{
	int num;
	int place;
};


bool compareUp92(outS a, outS b) {
	return a.num > b.num;
}

_1092::_1092()
{
	int N, M;
	cin >> N >> M;
	vector<vector<int>> goodlist;
	for (int i = 0; i < M; i++)
	{
		vector<int> goods;
		for (int j = 0; j < N; j++)
		{
			int temp;
			cin >> temp;
			goods.push_back(temp);
		}
		goodlist.push_back(goods);
	}
	vector<outS> goodCount;

	

	for (int i = 0; i < N; i++)//这里进行每一列的相加
	{
		outS temp;

		temp.num = 0;
		for (int j = 0; j < M; j++)
		{
			temp.num += goodlist[j][i];
		}
		temp.place = i;
		goodCount.push_back(temp);
	}
	sort(goodCount.begin(), goodCount.end(), compareUp92);
	int outFlag = goodCount[0].num;
	int spaceNum = 0;
	cout << outFlag << "\n";
	for (int i = 0; i < goodCount.size(); i++)
	{
		if (goodCount[i].num == outFlag)
		{
			spaceNum++;
	
		}

	}
	for (int i = 0; i < spaceNum; i++)
	{
		cout << goodCount[i].place + 1;
		if (i!=spaceNum-1)
		{
			cout << " ";
		}
	}


}


_1092::~_1092()
{
}
