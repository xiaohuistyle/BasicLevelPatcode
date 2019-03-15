#include "pch.h"
#include "_1056.h"


_1056::_1056()
{

	int N;
	cin >> N; 
	int * list = (int *)malloc(sizeof(int*)*N);
	int all = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> list[i];
		all += list[i];
	}
	all *= N - 1;
	cout << all * 11;

	




}


_1056::~_1056()
{
}
