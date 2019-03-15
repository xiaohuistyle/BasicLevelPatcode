#include "pch.h"
#include "_1030.h"

bool compare1030(int a,int b) {
	return a > b;
}
_1030::_1030()
{
	int	N, p;
	vector<int> v1;
	cin >> N >> p;

	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		v1.push_back(input);
	}
	sort(v1.begin(), v1.end(), compare1030);
	int max = v1.at(0);
	int min = v1.at(N-1);
	int confine = min * p;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (v1[i] <= confine)
		{
			count++;
		}
	}
	cout << count;
}


_1030::~_1030()
{
}
