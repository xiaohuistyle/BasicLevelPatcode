#include "pch.h"
#include "_1086.h"


_1086::_1086()
{
	int A, B;
	cin >> A >> B;
	int result = A * B;
	string resultS = to_string(result);
	for (int i = resultS.length()-1; i >= 0 ; i--)
	{
		cout << resultS[i];
	}



}


_1086::~_1086()
{
}
