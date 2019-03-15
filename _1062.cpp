#include "pch.h"
#include "_1062.h"


_1062::_1062()
{
	string first, second;
	int K;
	cin >> first >> second >> K;
	float start, end;
	int firstPlace = first.find_first_of('/');
	int firstMolecule = stoi(first.substr(0,firstPlace).c_str());
	int firstDenominator = stoi(first.substr(firstPlace+1,first.size()).c_str());
	start = firstMolecule * 1.0 / firstDenominator;
	int secondPlace = second.find_first_of('/');
	int secondMolecule = stoi(second.substr(0, secondPlace).c_str());
	int secondDenominator = stoi(second.substr(secondPlace+1, second.size()).c_str());
	end = secondMolecule * 1.0 / secondDenominator;
	for (int i = 0; i < K; i++)
	{
		if (i * 1.0 / K > start && i * 1.0 / K < end && K % i != 0)
		{
			
			cout << i << "/" << K;
			if ((i + 1) * 1.0 / K < end)
			{
				cout << " ";
			}
		}
	}




}


_1062::~_1062()
{
}
