#include "pch.h"
#include "_1045.h"


_1045::_1045()
{
	int N;
	cin >> N;
	int *a = (int *)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	int count = 0;
	vector<int> out;
	for (int i = 0; i < N; i++)//拿出来一个一个查
	{
		bool flag = true;
		//两边分别查找
		int place = i;
		//向右边查找
		for (int j = place+1; j < N; j++)
		{
			if (a[place]>a[j])
			{
				flag = false;
			}
			
		}
		for (int j = place; j > 0; j--)
		{
			if (a[place]<a[j])
			{
				flag = false;
			}
		}
		if (flag)
		{
			count++;
			out.push_back(a[place]);
		}

	}
	cout << count<<"\n";
	for (int i = 0; i < out.size(); i++)
	{
		cout << out[i];
		if (i!=out.size()-1)
		{
			cout << " ";
		}
	}


}


_1045::~_1045()
{
}
