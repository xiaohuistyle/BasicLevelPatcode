#include "pch.h"
#include "_1082.h"

struct scoreS
{
	string name;
	int x;
	int y;
	double distence;
};

bool compareUp(scoreS a, scoreS b) {

	return a.distence < b.distence;

}
_1082::_1082()
{
	int N;
	cin >> N;
	vector<scoreS> list;
	for (int i = 0; i < N; i++)
	{
		scoreS temp;
		cin >> temp.name >>temp.x >> temp.y;
		temp.distence =sqrt(pow(temp.x,2)+ pow( temp.y,2));
		list.push_back(temp);
	}
	sort(list.begin(),list.end(),compareUp);
	
	cout << list[0].name << " " << list[list.size() - 1].name;


}


_1082::~_1082()
{
}
