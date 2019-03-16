#include "pch.h"
#include "_1077.h"
bool compareUp(int a,int b) {
	return a > b;
}

_1077::_1077()
{
	int N, M;
	cin >> N >> M;
	vector<vector<double>> list;
	double teacher[100];
	for (int i = 0; i < N; i++)
	{
		vector<double> groupList;
		for (int j = 0; j < N; j++)
		{
			double temp;
			cin >> temp;
			if (j==0 && temp <= M && temp >=0)//老师的分数
			{
				teacher[i] = temp;
			}
			else if (temp<=M && j!=0 && temp >= 0)//学生的分数
			{
				groupList.push_back(temp);
			}
		}
		list.push_back(groupList);
	}
	for (int i = 0; i < N; i++)
	{
		sort(list[i].begin(), list[i].end(), compareUp);
		double all = 0;
		for (int j = 0; j < list[i].size(); j++)//求和
		{
			
			if (j!=0 && j!=list[i].size()-1)
			{
				all += list[i][j];
			}
		}
		all =round(all/ (list[i].size()-2));//G1
		all += teacher[i];//G1+G2
		all = round( all/2);//除2
		cout << all;
		if (i!=N-1)
		{
			cout << "\n";
		}
		
	}


}


_1077::~_1077()
{
}
