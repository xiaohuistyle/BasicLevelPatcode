#include "pch.h"
#include "_1046.h"

struct timeS
{
	int ASpeak;
	int ADo;
	int BSpeak;
	int BDo;
};
_1046::_1046()
{
	vector<timeS> turns;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		timeS temp;
		cin >> temp.ASpeak >> temp.ADo >> temp.BSpeak >> temp.BDo;
		turns.push_back(temp);
	}
	int Acount =0 ,Bcount = 0;
	for (int i = 0; i < N; i++)
	{
		bool Aflag = false,Bflag = false;
		if (turns[i].ADo == turns[i].ASpeak +turns[i].BSpeak)
		{
			
			Aflag = true;
		}
		if (turns[i].BDo == turns[i].ASpeak + turns[i].BSpeak)
		{
			Bflag = true;
		}
		if (Aflag&&Bflag)
		{
			continue;
		}
		else if (Aflag) {
			Acount++;
		}
		else if(Bflag)
		{
			Bcount++;
		}
	}
	cout << Bcount << " " << Acount;



}


_1046::~_1046()
{
}
