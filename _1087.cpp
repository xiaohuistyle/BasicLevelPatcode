#include "pch.h"
#include "_1087.h"

bool isExist(int value,vector<int> list) {

	for (int i = 0; i < list.size(); i++)
	{
		if (value==list[i])
		{
			return true;
		}
	}
	return false;

}

_1087::_1087()
{
	int N;
	cin >> N;
	vector<int> list;
	for (int i = 1; i <= N; i++)
	{
		int value = i / 2 + i / 3 + i / 5;
		if (isExist(value, list))
		{
			continue;
		}
		else
		{
			list.push_back(value);
		}
		
	}
	cout << list.size();



}


_1087::~_1087()
{
}
