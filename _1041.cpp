#include "pch.h"
#include "_1041.h"


struct examinee
{
	char examDoctet[14];
	int computerTestNum;
	int placeNum;
};


_1041::_1041()
{
	int N;
	cin >> N;
	vector<examinee> list;
	for (int i = 0; i < N; i++)
	{
		examinee temp;
		cin >> temp.examDoctet >> temp.computerTestNum >> temp.placeNum;
		list.push_back(temp);
	}
	int M;
	cin >> M;
	int *a = (int *)malloc(sizeof(int)*M);
	for (int i = 0; i < M; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < list.size(); j++)
		{
			if (a[i] == list[j].computerTestNum)
			{
				cout << list[j].examDoctet << " " << list[j].placeNum ;
				if (i != M - 1)
				{
					cout << "\n";
				}
			}
		}
	}
}


_1041::~_1041()
{
}
