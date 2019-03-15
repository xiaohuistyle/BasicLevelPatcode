#include "pch.h"
#include "_1042.h"

struct frequency
{
	char alphabet;
	int num;
};
bool comp(const frequency &a, const frequency &b) {
	 return a.num > b.num;
}

_1042::_1042()
{

	char inputString[1000];
	gets_s(inputString);

	for (int i = 0; i < strlen(inputString); i++)//����дΪСд
	{
		if (inputString[i] > 'A' && inputString[i] < 'Z')
		{
			inputString[i] += 32;
		}
	}
	//fgets(inputString);
	//cin >> inputString;
	vector<frequency> list;
	for (int i = 0; i <strlen( inputString); i++)
	{
		frequency temp;
		temp.alphabet = inputString[i];
		temp.num = 0;
		for (int j = 0; j < strlen(inputString); j++)
		{
			if (temp.alphabet == ' ')//��ͳ�ƿո�
			{
				break;
			}
			if (inputString[j] == temp.alphabet)
			{
				inputString[j] = ' ';
				temp.num++;
			}
		}
		list.push_back(temp);
	}
	sort(list.begin(), list.end(), comp);
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i].alphabet > 'a' &&list[i].alphabet < 'z')//�ҵ���һ����ĸ
		{
			if (list[i+1].alphabet>'a'&&list[i+1].alphabet<'z')//��������ĵڶ�������ĸ
			{
				if (list[i].alphabet>list[i+1].alphabet)
				{
					cout << list[i+1].alphabet << " " << list[i+1].num;
				}
				else
				{
					cout << list[i].alphabet << " " << list[i].num;
				}
				break;
			}
			else//������ֱ�������һ����ĸ����
			{
				cout << list[i].alphabet << " " << list[i].num;
				break;
			}
		}
	}

}


_1042::~_1042()
{
}
