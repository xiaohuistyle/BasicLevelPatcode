#include "pch.h"
#include "_1091.h"

bool isAutomorph(string original,string NK2) {
	
	int count = original.length();
	int len = NK2.length();
	bool flag = true;
	while (flag)
	{
		count--;
		len--;
		if (count == -1 || len == -1)
		{
		
			return true;
		}
		if (original[count] != NK2[len])
		{
			return false;
		}
		
		

	}
	return true;
}
string getNK2(int N, int num) {

	int resultI = pow(num, 2)*N;
	string result = to_string(resultI);

	return result;


}

_1091::_1091()
{
	int N;
	cin >> N;
	vector<int> list;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		list.push_back(temp);
	}
	for (int i = 0; i < N; i++)
	{
		bool couNoFlag = true;
		for (int j = 0; j < 10; j++)
		{
			string NK2 = getNK2(j, list[i]);
			bool flag = isAutomorph(to_string(list[i]), NK2);
			if (flag)
			{
				cout << j << " " << NK2;
				couNoFlag = false;
				break;
			}
		}
		if (couNoFlag)
		{
			cout << "No";
		}
		if (i!=N-1)
		{
			cout << "\n";
		}
	}


}


_1091::~_1091()
{
}
