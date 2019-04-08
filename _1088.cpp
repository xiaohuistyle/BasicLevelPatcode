#include "pch.h"
#include "_1088.h"

string revert(string temp) {
	string result = "";
	for (int i = temp.size()-1; i >=0; i--)
	{
		result += temp[i];
	}
	return result;
}
string getResult(int m,int temp) {

	if (m==temp)
	{
		return "ping";
	}
	else if(m<temp)
	{
		return "cong";
	}
	else if(m > temp)
	{
		return "Gai";
	}
	

}


_1088::_1088()
{
	string ablityA, ablityB;
	int m , x , y;
	cin >> m >> x >> y;

	double numC=-1 , numA, numB;
	int a, b, c;
	for (int i = 10; i < 100; i++)//±©Á¦Çó½â
	{
		ablityA = to_string(i) ;
		ablityB = revert(ablityA);
		numA = stoi(ablityA.c_str());
		numB = stoi(ablityB.c_str());
		if (abs(numA - numB) / x == numB / y)
		{
			a = numA;
			b = numB;
			c = numB / y;
			
			
		}
	}

	if (c<0)
	{
		cout << "No Solution";
	}
	else
	{
		string aS = getResult(m, a);
		string bS = getResult(m, b);
		string cS = getResult(m, b);
		cout << a <<" "<< aS << " " << bS << " " << cS;
	}
}


_1088::~_1088()
{
}
