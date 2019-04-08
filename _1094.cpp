#include "pch.h"
#include "_1094.h"

bool check(string temp,int len) {

	if (temp.length()!=len)
	{
		return false;
	}
	int num = stoi(temp.c_str());

	for (int i = 2; i < num; i++)
	{
		if (num%i==0)
		{
			return false;
		}
	}
	return true;
}


_1094::_1094()
{
	int L, K;
	cin >> L >> K;
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		string temp = "";
		if (i<input.length()-4)
		{
			for (int j = i; j < i + K; j++)
			{
				temp += input[j];
			}
			if (check(temp, K))
			{
				cout << temp;
				return;
			}
		}
		
	}
	cout << "404";




}


_1094::~_1094()
{
}
