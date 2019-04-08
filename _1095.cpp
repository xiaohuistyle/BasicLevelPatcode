#include "pch.h"
#include "_1095.h"


struct numberS
{
	string level;
	string exam;
	string date;
	string examer;
	int score;
};
struct examS
{
	string exam;
	int count;
};
bool downNumberS(numberS a, numberS b) {

	if (a.score==b.score)
	{
		if (a.level==b.level)
		{
			int Aall = stoi(a.exam) + stoi(a.date) + stoi(a.examer);
			int Ball = stoi(b.exam) + stoi(b.date) + stoi(b.examer);
			return Aall > Ball;
			
		}
		else
		{

			return a.level > a.level;
		}
	}
	else
	{
		return a.score > b.score;//c³É¼¨½µÐò
	}
}

bool downExamS(examS a, examS b) {
	if (a.count==b.count)
	{
		return	a.exam < b.exam;
	}
	else
	{
		return a.count > b.count;
	}

}


int isExist(numberS temp, vector<examS> eList) {
	for (int i = 0; i < eList.size(); i++)
	{
		if (temp.exam == eList[i].exam)
		{
			return i;
		}
	}
	return -1;
}

_1095::_1095()
{
	int N, M;
	cin >> N >> M;
	vector<numberS> list;
	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;
		numberS number;
		number.level= temp.substr(0,1);
		number.exam= temp.substr(1,3);	
		number.date = temp.substr(4,6);
		number.examer = temp.substr(10,3);
		cin >> number.score;

		list.push_back(number);
	}
	for (int i = 0; i < M; i++)
	{
		int type;
		string command;
		cin >> type >> command;
		if (type==1)
		{
			sort(list.begin(), list.end(), downNumberS);
			cout << "Case " << i+1 << ": " << type << " " << command << "\n";
			int flag = true;
			for (int i = 0; i < list.size(); i++)
			{
				if (list[i].level == command)
				{
					flag = false;
					cout << list[i].level << list[i].exam << list[i].date << list[i].examer << " " << list[i].score<<"\n";
				}
			}
			if (flag)
			{
				cout << "NA";
			}
		}
		else if (type==2)
		{
			cout << "Case " << i+1 << ": " << type << " " << command << "\n";
			int count = 0;
			int score = 0;
			int flag = true;
			for (int i = 0; i < list.size(); i++)
			{
				if (list[i].exam == command)
				{
					flag = false;
					count++;
					score += list[i].score;
				}
			}

			if (flag)
			{
				cout << "NA";
			}
			else
			{
				cout << count << " " << score<<"\n";
			}

			
		}
		else if(type==3)
		{
			cout << "Case " << i+1 << ": " << type << " " << command << "\n";
			vector<examS> eList;
			for (int i = 0; i < list.size(); i++)
			{
				if (list[i].date== command)
				{
					examS temp;
					temp.count = 0;
					int place = isExist(list[i], eList);
					if (place == -1)
					{
						temp.exam = list[i].exam;
						temp.count++;
						eList.push_back(temp);
					}
					else
					{
						eList[place].count++;
					}
				}
			}

			if (eList.size()==0)
			{
				cout << "NA";
				return ;
			}
			sort(eList.begin(), eList.end(), downExamS);
			for (int i = 0; i < eList.size(); i++)
			{
				
				cout << eList[i].exam << " " << eList[i].count<<"\n";
			}

		}
	}
}


_1095::~_1095()
{
}
