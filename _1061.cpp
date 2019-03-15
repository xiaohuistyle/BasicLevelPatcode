#include "pch.h"
#include "_1061.h"

struct problemS
{
	int score;
	int ans;
};
struct studentS
{
	int ans[100];
	int score;
};

_1061::_1061()
{
	int N, M;
	cin >> N >> M;
	vector<problemS> problemList;
	int score[100];
	int ans[100];
	for (int i = 0; i < M; i++)
	{
		cin >> score[i];
	}
	for (int i = 0; i < M; i++)
	{
		cin >> ans[i];
	}

	vector<studentS> studentList;
	for (int i = 0; i < N; i++)
	{
		studentS student;
		student.score = 0;
		for (int j = 0; j < M; j++)
		{
			cin >> student.ans[j];
			
				if (ans[j] == student.ans[j])//每次输入一个数就进行比较是否有相等的
				{
					student.score += score[j];
				}
			
		}
		studentList.push_back(student);
	}
	for (int i = 0; i < N; i++)
	{
		cout << studentList[i].score;
		if (i != N - 1)
		{
			cout << "\n";
		}
	}
	


}


_1061::~_1061()
{
}
