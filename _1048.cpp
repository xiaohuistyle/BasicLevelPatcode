#include "pch.h"
#include "_1048.h"


_1048::_1048()
{
	string A, B;
	cin >> A >> B;
	int longLength = 0,shortLength=0;
	if (A.length()> B.length())
	{
		longLength = A.length();
		shortLength = B.length();
	}
	else
	{
		shortLength = A.length();
		longLength = B.length();
	}
	int diff = longLength - shortLength;
	vector<string> temp;
	 int sub = 0;
	//������B�Ƚϳ��������
	for (int i = diff; i < longLength; i++)
	{
		if ((i-1) % 2 == 0)//��λ��Ϊż��
		{
			int BMinusA = 0;
			if (A.length() < B.length())//���B�Ƚϳ�
			{
				BMinusA = (B[i]-'0') - (A[i - diff]-'0');//��Ӧλ��
			}
			else
			{
				BMinusA = (B[i + diff]-'0') - (A[i]-'0');
			}
			if (BMinusA < 0)
			{
				BMinusA += 10;
			}
			temp.push_back(to_string(BMinusA));
			
		}
		else if((i - 1) %2 != 0)//��Ϊ����
		{
			int BPlusA = 0;
			if (A.length() < B.length())//���B�Ƚϳ�
			{
				BPlusA = (B[i]-'0') +( A[i - diff]-'0');//��Ӧλ��
			}
			else
			{
				BPlusA = (B[i + diff] -'0')+ (A[i]-'0');
			}

			switch (BPlusA % 13)
			{
			case 10:temp.push_back("J"); break;
			case 11:temp.push_back("Q"); break;
			case 12:temp.push_back("K"); break;
			default:  temp.push_back(to_string(BPlusA % 13));
				break;
			}
			
		}
	}
	if (A.length()>B.length())
	{
		for (int i = 0; i < diff; i++)
		{
			cout << A[i];
		}
	}
	else
	{
		for (int i = 0; i < diff; i++)
		{
			cout << B[i];
		}
	}
	for (int i = 0; i < temp.size(); i++)
	{
		cout << temp[i];
	}

}


_1048::~_1048()
{
}
