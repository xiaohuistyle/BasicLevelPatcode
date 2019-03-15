#include "pch.h"
#include "_1067.h"


_1067::_1067()
{
	string correct;
	int N;
	cin >> correct >> N;
	getchar();
	int count=0;
	bool flag = true;
	vector<string> list;
	while (flag )
	{
		string temp;
		getline(cin, temp);
		if (temp!="#")
		{
			if (temp!= correct)
			{
				if (count<N)
				{
					string wrong="Wrong password: ";
					wrong = wrong + temp;
					list.push_back(wrong);
				}
				else
				{
					string locked = "Account locked";
					list.push_back(locked);
					
				}
				count++;
			}
			else
			{
				string Welcome = "Welcome in";
				list.push_back(Welcome);
			}
		}
		else
		{
			break;
		}
	}

	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i];
		if (i!=list.size()-1)
		{
			cout << "\n";
		}
	}
}


_1067::~_1067()
{
}
