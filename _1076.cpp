#include "pch.h"
#include "_1076.h"


_1076::_1076()
{
	int N;
	cin >> N;
	vector<int> ans;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			string input;
			cin >> input;
			if (input.find('T') != string::npos)
			{
				string pString = input.substr(0, 1);
				switch (pString[0])
				{
				case 'A': ans.push_back(1); break;
				case 'B': ans.push_back(2); break;
				case 'C': ans.push_back(3); break;
				case 'D': ans.push_back(4); break;
				}
			}

		}
	}
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
	}
}


_1076::~_1076()
{
}
