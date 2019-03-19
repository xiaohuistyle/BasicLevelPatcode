#include "pch.h"
#include "_1081.h"


_1081::_1081()
{
	int N;
	vector<string> list;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		bool dotFlag = false, numFlag = false , alphaFlag =false,otherFlag=false;
		string temp;
		cin >> temp;
		if (temp.length()<6)
		{
			cout << "Your password is tai duan le.";
		}
		else 
		{
			for (int j = 0; j < temp.length(); j++)
			{
				if (temp[j]=='.')
				{
					dotFlag = true;
				}
				else if (temp[j]-'0'>=0&& temp[j]-'0'<=9)
				{
					numFlag = true;
				}
				else if((temp[j] >= 'a' && temp[j] <= 'z')||(temp[j] >= 'A' && temp[j] <= 'Z'))
				{
					alphaFlag = true;
				}
				else
				{
					otherFlag = true;
				}
				
			}
			if (otherFlag)
			{
				cout << "Your password is tai luan le.";
			}else if (dotFlag&&numFlag)
			{
				cout << "Your password needs zi mu.";
			}
			else if(dotFlag&&alphaFlag)
			{
				cout << "Your password needs shu zi.";
			}
			else 
			{
				cout << "Your password is wan mei.";
			}
			
		}
		if (i!=N-1)
		{
			cout << "\n";
		}
	}
}


_1081::~_1081()
{
}
