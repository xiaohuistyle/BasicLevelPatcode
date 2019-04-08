#include "pch.h"
#include "_1084.h"

string describe(string num) {
	string result="";
	for (int i = 0; i < num.length(); i++)
	{
		int count = 1;
		int jCount = 0;
		for (int j = i+1; j < num.length(); j++)
		{
			
			if (num[i]==num[j])
			{
				jCount++;
				count++;
			}
			else
			{
				break;
			}
		}
		result += to_string(num[i] - '0');
		result += to_string(count);
		i += jCount;
		
	}
	return result;

}

_1084::_1084()
{
	string num;
	int  N;
	cin >> num >> N;
	string result = "";
	for (int i = 0; i < N-1; i++)
	{
		if (i==0)
		{
			result = describe(num);
		}
		else
		{
			result = describe(result);
		}
		//cout << result << " " << i<<"\n";
		
	}
	cout << result;
	

}


_1084::~_1084()
{
}
