#include "pch.h"
#include "_1060.h"

bool compare1060(int a, int b) {
	return a > b;
}

_1060::_1060()
{
	int N;
	vector<int> list;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		list.push_back(temp);
	}
	sort(list.begin(), list.end(), compare1060);
	int ans = 0,p = 0;
	while (ans <= N && list[p] > p)
	{
		ans++;
		p++;
	}
	cout << ans;


}


_1060::~_1060()
{



}
