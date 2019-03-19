#include "pch.h"
#include "_1079.h"
bool isPalindromic(string inputString) {

	for (int i = 0; i < inputString.length() / 2; i++)
	{
		if (inputString[i]!= inputString[inputString.length()-i-1])
		{
			return false;
		}
	}
	return true;
}
string reversion(string inputString) {
	string result="";
	for (int i = inputString.length()-1; i>=0; i--)
	{
		result += inputString[i];
	}
	return result;
}

string  add(string inputString,string rInputstring) {

	int all = stoi(inputString.c_str()) + stoi(rInputstring.c_str());
	return to_string(all);
}


_1079::_1079()
{
	bool f;
	string inputString;
	cin >> inputString;
	string rInputstring, next, Rnext;
	string result ;
	bool Startflag ;

	int count = 0;
	do
	{
		count++;
		if (count==1)
		{
			
			rInputstring = reversion(inputString);
			result = add(inputString, rInputstring);
			Startflag = isPalindromic(result);
			if (Startflag)
			{
				printf("%s is a palindromic number.", result);
			}
			else
			{
				cout << inputString << " + " << rInputstring << " = " << result << "\n";
			}
			
		}
		else
		{
			
			if (count==11)
			{
				cout << "Not found in 10 iterations.";
				break;
			}
			next = result;
			Rnext = reversion(result);
			result = add(next, Rnext);
			Startflag = isPalindromic(result);
			if (Startflag)
			{
				cout << next << " + " << Rnext << " = " << result << "\n";
				cout << result << " is a palindromic number.";
			}
			else
			{
				cout << next << " + " << Rnext << " = " << result << "\n";
			}
		}
	} while (!Startflag);
}


_1079::~_1079()
{
}
