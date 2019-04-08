#include "pch.h"
#include "_1083.h"

struct dataS
{
	int num;
	int count;
};

int isExist(int num, vector<dataS> list) {


	for (int i = 0; i < list.size(); i++)
	{
		if (num==list[i].num)
		{
			return i;
		}
	}
	return -1;
}
bool compareUp(dataS a, dataS b) {

	return a.num > b.num;

}

_1083::_1083()
{
	int N;
	cin >> N;
	int arr[1000];
	vector<dataS> list;

	for (int i = 1; i <= N; i++)
	{
		int data;
		cin >> data;
		int place = 0;
		if (data>i)
		{
			place = isExist(data - i, list);
		}
		else
		{
			place = isExist(i - data, list);
		}
		
		if (place!=-1)
		{
			list[place].count++;
		}
		else
		{
			dataS temp;
			if (data > i)
			{
				temp.num = data - i;
			}
			else
			{
				temp.num = i - data;
			}
			temp.count = 1;
			list.push_back(temp);
		}
	}
	sort(list.begin(), list.end(), compareUp);
	int outCount = 0;
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i].count!=1)
		{
			outCount++;
			cout << list[i].num << " " << list[i].count;
		}
		if (i!=list.size()-1- outCount)
		{
			cout << "\n";
		}
	}


}


_1083::~_1083()
{
}
