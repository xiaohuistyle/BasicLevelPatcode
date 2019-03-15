#include "pch.h"
#include "_1057.h"


_1057::_1057()
{

	char inputString[1000];
	char *a = fgets(inputString, 1000, stdin);
	int len = strlen(inputString);
	//getline(cin, inputString);
	//gets_s(inputString);
	//cin >> inputString;
	int all = 0;
	for (int i = 0; i < len; i++)
	{
		if (inputString[i] >= 'a' && inputString[i] <= 'z')//´óÐ´×ÖÄ¸
		{
			all += inputString[i] - 'a' + 1;
		}
		if (inputString[i] >= 'A' && inputString[i] <= 'Z')//Ð¡Ð´×ÖÄ¸
		{
			all += inputString[i] - 'A' + 1;
		}
	}
	int temp = all;
	string binary;
	int oneCount = 0, zeroCount = 0;
	while (temp)
	{
		if (temp % 2 == 1)
		{
			oneCount++;
		}
		else
		{
			zeroCount++;
		}
		temp /= 2;
	}
	
	printf("%d %d",zeroCount,oneCount);


}


_1057::~_1057()
{
}
