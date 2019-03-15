#include "pch.h"
#include "_1040.h"


_1040::_1040()
{
	string inputString;
	cin >> inputString;
	int count = 0;
	int Aplace = 0, Tplace = 0;
	for (int i = 0; i < inputString.length(); i++)
	{
		if (inputString[i] == 'P')//向后找A
		{
			inputString[i] == ' ';
			for (int j = i; j < inputString.length(); j++)
			{
				if (inputString[j] == 'A')//向后找T
				{
					for (int k = j; k < inputString.length(); k++)
					{
						if (inputString[k] == 'T' )
						{
							count++;
						}
					}
				}
			}
		}
	}
	cout << count;

}


_1040::~_1040()
{
}
