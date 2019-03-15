#include "pch.h"
#include "_1055.h"

struct listS
{
	char name[10];
	int high;
};
bool compare1055(listS a, listS b) {

	if (b.high!=a.high)
	{
		return a.high > b.high;
	}
	else
	{
		
		return strcmp(a.name,b.name)<0;
	}

}
_1055::_1055()
{
	int N, K;
	cin >> N >> K;
	vector<listS> list;
	for (int i = 0; i < N; i++)
	{
		listS temp;
		cin >> temp.name >> temp.high;
		list.push_back(temp);
	}
	sort(list.begin(), list.end(), compare1055);

	int last = N / K + N % K;
	int other = N / K;;
	string result = "";
	for (int i = 0; i < N;)
	{
		if (i==0)//这是最后一排
		{
			result = list[0].name;
			++i;
			for (int j = 1; j < last; ++j ,++i)//last -1个数据
			{
				string temp = list[i].name;
				if (j%2==1)
				{
					result = temp + " " + result;
				}
				else
				{ 
					result = result + " " + temp;
				}

			}
			cout << result <<"\n";
		}
		else
		{
			result = list[i].name;
			++i;
			for (int j = 1; j < other; ++j, ++i)
			{
				string temp = list[i].name;
				if (j % 2 == 1)
				{
					result = temp + ' ' + result;
				}
				else
				{
					result = result + ' ' + temp;
				}

			}
			if (i != N-1)
			{
				cout << result << "\n";
			}
			else
			{
				cout << result;
			}
		}
	}

	
}


_1055::~_1055()
{
}
