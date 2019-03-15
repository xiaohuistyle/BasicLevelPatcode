#include "pch.h"
#include "_1066.h"




_1066::_1066()
{
	int M, N;
	int A, B;
	string gray;
	cin >> M >> N >> A >> B >> gray;
	vector<vector<string>> list;
	for (int i = 0; i < M; i++)
	{
		vector<string> temp;
		for (int j = 0; j < N; j++)
		{
			string num;
			cin >> num;
			int tempNum = stoi(num.c_str());
			if (tempNum <= B && tempNum >= A)
			{
				temp.push_back(gray);
			}
			else
			{
				temp.push_back(num);
			}
			
		}
		list.push_back(temp);
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int tempNum = stoi(list[i][j].c_str());
			if (tempNum < 10)
			{
				printf("00%d", tempNum);
			}
			else if (tempNum >= 10 && tempNum < 100) {
				printf("0%d", tempNum);
			}
			else if (tempNum >= 100)
			{
				cout << list[i][j];
			}
			
			if (j != N - 1)
			{
				cout << " ";
			}
			if (j == N-1)
			{
				cout << "\n";
			}
			
		}
	}


}


_1066::~_1066()
{
}
