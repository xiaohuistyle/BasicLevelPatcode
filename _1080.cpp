#include "pch.h"
#include "_1080.h"

struct DataS
{
	string name;
	int score;
};
struct studentS 
{
	string name;
	int scoreP;
	int scoreM;
	int scoreN;
	int score;
};

int isExist(vector<DataS> list,string name) {

	for (int i = 0; i < list.size(); i++)
	{
		if (name == list[i].name)
		{
			return list[i].score;
		}
	}
	return 0;
}
bool compareUp(studentS a, studentS b) {

	if (a.score==b.score)
	{
		return a.name < b.name;
	}
	else
	{
		return a.score > b.score;
	}

}


_1080::_1080()
{
	int P, M, N;
	cin >> P>>M>>N;
	vector<DataS> listP;
	for (int i = 0; i < P; i++)
	{
		DataS temp;
		cin >> temp.name >> temp.score;
		listP.push_back(temp);
	}
	vector<DataS> listM;
	for (int i = 0; i < M; i++)
	{
		DataS temp;
		cin >> temp.name >> temp.score;
		listM.push_back(temp);
	}
	vector<DataS> listN;
	for (int i = 0; i < N; i++)
	{
		DataS temp;
		cin >> temp.name >> temp.score;
		listN.push_back(temp);
	}
	vector<studentS> stuList;
	for (int i = 0; i < P; i++)
	{
		int Mscore = isExist(listM, listP[i].name);
		int Nscore = isExist(listN, listP[i].name);
		if (Mscore && Nscore && listP[i].score>=200)//如果两场考试都参加了
		{
			studentS temp;
			temp.name = listP[i].name;
			temp.scoreP = listP[i].score;
			temp.scoreM = Mscore;
			temp.scoreN = Nscore;
			int score = 0;
			if (Mscore> Nscore)//如果期中的成绩大于期末的成绩
			{
				score =round( Mscore * 0.4 + Nscore * 0.6);
			}
			else
			{
				score = Nscore;
			}
			temp.score = score;
			if (temp.score >= 60)
			{
				stuList.push_back(temp);
			}
			
			
		}
		else if(!Mscore && Nscore && listP[i].score >= 200)
		{
			studentS temp;
			temp.name = listP[i].name;
			temp.scoreP = listP[i].score;
			temp.scoreM = -1;
			temp.scoreN = Nscore;
			int score = 0;
			if (Mscore > Nscore)//如果期中的成绩大于期末的成绩
			{
				score = round(Mscore * 0.4 + Nscore * 0.6);
			}
			else
			{
				score = Nscore;
			}
			temp.score = score;
			if (temp.score>=60)
			{
				stuList.push_back(temp);
			}
			
		}
	}
	sort(stuList.begin(), stuList.end(), compareUp);
	for (int i = 0; i < stuList.size(); i++)
	{

		cout << stuList[i].name << " " << stuList[i].scoreP << " " << stuList[i].scoreM << " " << stuList[i].scoreN << " " << stuList[i].score;
		if (i!= stuList.size()-1)
		{
			cout << "\n";
		}
	}

}


_1080::~_1080()
{
}
