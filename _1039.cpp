#include "pch.h"
#include "_1039.h"


_1039::_1039()
{
	string vendor, buyer;
	cin >> vendor >> buyer;
	int count = 0;
	bool flag = false;
	for (int i = 0; i < buyer.length(); i++)
	{
		for (int j = 0; j < vendor.length(); j++)
		{
			if (buyer[i] == vendor[j])
			{
				vendor[j] = ' ';
				buyer[i] = ' ';
				count++;
				break;
			}
		}
	}
	if (count == buyer.length())
	{
		flag = true;
	}
	int vendorNum = 0;
	int buyerrNum = 0;
	if (flag)
	{
		for (int i = 0; i < vendor.length(); i++)
		{
			if (vendor[i] != ' ')
			{
				vendorNum++;
			}
		}
		cout << "Yes" << " " << vendorNum;
	}
	else
	{
		for (int i = 0; i < buyer.length(); i++)
		{
			if (buyer[i] != ' ')
			{
				buyerrNum++;
			}
		}
		cout << "No" << " " << buyerrNum;
	}
}


_1039::~_1039()
{
}

