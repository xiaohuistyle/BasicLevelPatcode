#include "pch.h"
#include "_1047.h"
struct teamS
{
	
	int number;
	int member;
	int score;
};
bool compare(teamS a, teamS b) {
	return a.score > b.score;

}

_1047::_1047()
{
	vector<teamS> list;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		teamS temp;
		string propertyS;

		cin >> propertyS >> temp.score;
		int place = propertyS.rfind('-');
		temp.number = atoi(propertyS.substr(0, place).c_str()); //string ת int
		temp.member = atoi(propertyS.substr(place+1 , propertyS.length()).c_str());

		list.push_back(temp);
	}
	for (int i = 0; i < list.size(); i++)
	{
		for (int j = i; j < list.size(); j++)//ǰ���Ԫ�ز������
		{
			if (list[i].number == list[j].number)
			{
				list[i].score += list[j].score;
				list.erase(list.begin()+j);
			}
		}
	}
	sort(list.begin(),list.end(), compare);
	cout << list[0].number << " " << list[0].score;



}


_1047::~_1047()
{
}
