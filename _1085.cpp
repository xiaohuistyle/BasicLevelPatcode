#include "pch.h"
#include "_1085.h"
struct scoreS
{
	string number;
	int score;
	string school;
};
string toLow(string temp) {
	
	for (int i = 0; i < temp.length(); i++)
	{
		if (temp[i]>='A'&&temp[i]<='Z')
		{
			temp[i] += 32;
		}
	}
	return temp;

}

struct resultS
{
	int rank;
	string school;
	int score;
	int num;
};
int isExist(string school, vector<resultS> listR) {

	for (int i = 0; i < listR.size(); i++)
	{
		if (school==listR[i].school)
		{
			return i;
		}
	}
	return -1;

}

bool compareUp(resultS a, resultS b) {

	if (a.score==b.score)
	{
		if (a.num==b.num)
		{
			return a.school > b.school;
		}
		else
		{
			return a.num > b.num;
		}
	}
	else
	{
		return a.score > b.score;
	}

}


_1085::_1085()
{
	int N;
	cin >> N;
	vector<scoreS> list;
	for (int i = 0; i < N; i++)
	{
		scoreS temp;
		string tempschool;
		cin >> temp.number >> temp.score >> tempschool;
		string school = toLow(tempschool);
		temp.school = school;
		list.push_back(temp);
	}
	vector<resultS> listR;
	for (int i = 0; i < list.size(); i++)
	{
		int place = isExist(list[i].school, listR);
		if (place==-1)//如果不存在 则创建此学校的信息
		{
			resultS temp;
			temp.rank = 0;
			temp.num = 1;
			temp.school = list[i].school;
			temp.score = list[i].score;
			listR.push_back(temp);
		}
		else
		{
			if (list[i].number[0] == 'B')//乙级
			{
				listR[place].score += (list[i].score / 1.5);
			}
			else if (list[i].number[0] == 'A')//甲级
			{
				listR[place].score += list[i].score;
			}
			else if (list[i].number[0] == 'T')//顶级
			{
				listR[place].score += (list[i].score * 1.5);
			}
			listR[place].num++;
		}
	}
	sort(listR.begin(), listR.end(), compareUp);
	listR[0].rank = 1;
	int rank = 1;
	for (int i = 0; i < listR.size(); i++)
	{
		if (listR[i].score == listR[i+1].score)
		{
			listR[i + 1].rank = listR[i].rank;

		}
		else
		{
			rank++;
			listR[i + 1].rank = rank;
		}
	}
	cout << listR.size() << "\n";
	for (int i = 0; i < listR.size(); i++)
	{
		if (i!= listR.size()-1)
		{
			cout << "\n";
		}
		cout << listR[i].rank << " " << listR[i].school << " " << listR[i].score << " " << listR[i].num << "\n";
	}




}


_1085::~_1085()
{
}
