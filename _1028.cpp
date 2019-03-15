#include "pch.h"
#include "_1028.h"
typedef struct people
{
	string	name;
	int Date;
}peoples;

_1028::_1028()
{
	peoples town[100];
	int peopleNum;
	cin >> peopleNum;
	
	const char *Delimiter = "/";
	string temp ;
	for (int i = 0; i < peopleNum; i++)
	{
		char  inputdate = 0;
		cin >> town[i].name >> temp;
		//char *p = strtok_s(temp, Delimiter);
		int one = temp.find('/');
		string year = temp.substr(0, one);
		string mouthAndDay = temp.substr(one+1, temp.length());
		int two = mouthAndDay.find('/');
		string mouth = mouthAndDay.substr(0,two);
		string day = mouthAndDay.substr(two + 1, mouthAndDay.length());
		int yearInt = stoi(year);
		int mouthInt  = stoi(mouth);
		int dayInt = stoi(day);
		town[i].Date = yearInt * 10000 + mouthInt * 100 + dayInt;
	}
	int minYear = 18140906,maxYear = 20140906;
	int max = 0, min = 0, count = 0;
	for (int  i = 0; i < peopleNum; i++)
	{
		///在允许范围内挑选数据
		if (town[i].Date <= maxYear && town[i].Date >= minYear)
		{
			count++;
			if (town[i].Date>town[min].Date)
			{
				min = i;
			}
			if (town[i].Date<town[max].Date)
			{
				max = i;
			}
		}
	}
	cout << count << ' ' << town[max].name << ' ' << town[min].name;
	

}


_1028::~_1028()
{
}
