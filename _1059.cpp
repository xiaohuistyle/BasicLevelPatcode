#include "pch.h"
#include "_1059.h"
struct inputS
{

	char number[10];
	bool flag;
};

bool isPrime(int n) {

	if (n <= 3)
	{
		return n > 1;
	}
	for (int i = 2; i < n; i++)
	{
		if (n%i==0)//��һ���������� ��������
		{
			return false;
		}
	}
	return true;
}

_1059::_1059()
{
	int N;
	cin >> N;
	vector<inputS> list;
	for (int i = 0; i < N; i++)
	{
		inputS temp;
		cin >> temp.number;
		temp.flag = false;
		list.push_back(temp);
	}
	int K;
	cin >> K;
	vector<inputS> compare;
	for (int i = 0; i < K; i++)
	{
		inputS temp;
		cin >> temp.number;
		temp.flag = false;
		compare.push_back(temp);
	}
	for (int i = 0; i < compare.size(); i++)
	{
		bool flag = false;
		for (int j = 0; j < list.size(); j++)
		{
			if ( strcmp(compare[i].number, list[j].number)==0)//�Ƚ�����char�ַ����Ƿ���ͬ
			{
				flag = true;
				if (j+1 == 1 && !list[j].flag)//����ǵ�һ��
				{
					list[j].flag = true;
					cout << compare[i].number << ": Mystery Award";
				}
				else if (isPrime(j+1) && !list[j].flag)
				{
					list[j].flag = true;
					cout << compare[i].number << ": Minion";
				}
				else if (!isPrime(j+1)&&j+1!=1)
				{
					list[j].flag = true;
					cout << compare[i].number << ": Chocolate";
				}
				else if(list[j].flag)
				{
					cout << compare[i].number << ": Checked";
				}
			}
		}
		if (!flag)
		{
			cout << compare[i].number << ": Are you kidding?";
		}
		if (i != compare.size() - 1)
		{
			cout << "\n";
		}
	}


}


_1059::~_1059()
{
}
