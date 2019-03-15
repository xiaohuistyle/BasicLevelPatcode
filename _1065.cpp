#include "pch.h"
#include "_1065.h"

struct coupleS
{
	char man[5];
	char woman[5];
};
struct numberS
{
	char name[5];
	bool isDog;
};
/*
如果有伴侣，返回伴侣的名字
*/
char* checkCouple(char* number, vector<coupleS> list) {
	for (int i = 0; i < list.size(); i++)
	{
		if (strcmp(number,list[i].man)==0)
		{
			return list[i].woman;
		}
		else if(strcmp(number, list[i].woman) == 0)
		{
			return list[i].man;
		}
	}
	return NULL;
}
/*
查找伴侣是否在
*/
bool checkAttend(char* number,vector<numberS> numberList) {

	for (int i = 0; i < numberList.size(); i++)
	{
		if (strcmp(number,numberList[i].name)==0)
		{
			return	true;
		}
	}
	return false;

}

_1065::_1065()
{
	int N , M;
	cin >> N;
	vector<coupleS> list;
	for (int i = 0; i < N; i++)
	{
		coupleS temp;
		cin >> temp.man >> temp.woman;
		list.push_back(temp);
	}
	cin >> M;
	vector<numberS> numberList;
	for (int i = 0; i < M; i++)
	{
		numberS tempN;
		cin >> tempN.name;
		tempN.isDog = false;
		numberList.push_back(tempN);
	}
	//先查询有无伴侣
	//如果有伴侣，则查询伴侣到没到

	for (int i = 0; i < M; i++) 
	{
		char* couple = checkCouple(numberList[i].name, list);
		if (couple == NULL)
		{
			numberList[i].isDog = true;
		}
		else
		{
			bool isAttend=checkAttend(couple, numberList);
			if (!isAttend)
			{
				numberList[i].isDog = true;
			}
		}
	}
	
	for (int i = 0; i < M; i++)
	{
		if (numberList[i].isDog)
		{
			cout << numberList[i].name;
		}
		if (i != M - 1)
		{
			cout << " ";
		}
	}
	
}


_1065::~_1065()
{
}
