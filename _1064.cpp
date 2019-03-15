#include "pch.h"
#include "_1064.h"

bool compare1064(int a,int b) {
	return a < b;
}
_1064::_1064()
{
	int N;
	cin >> N;
	string list[100];
	for (int i = 0; i < N; i++)
	{
		cin >> list[i];
	}
	vector<int> ans;
	for (int i = 0; i < N; i++)
	{
		int num = 0;
		for (int j = 0; j < list[i].length(); j++)
		{
			num += list[i][j]-'0';
		}
		ans.push_back(num);
	}
	sort(ans.begin(), ans.end(), compare1064);
	ans.erase(unique(ans.begin(), ans.end()),ans.end());
	cout << ans.size()<<"\n";
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
		if (i!=ans.size()-1)
		{
			cout << " ";
		}
	}


}


_1064::~_1064()
{
}
