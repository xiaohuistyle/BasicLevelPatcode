#include "pch.h"
#include "_1063.h"

struct pluralS
{
	int solid;
	int vain;
	float value;
};
bool compare1063(pluralS a , pluralS b) {
	return a.value > b.value;
}

_1063::_1063()
{
	int N;
	cin >> N;
	vector<pluralS> pluralList;
	for (int i = 0; i < N; i++)
	{
		pluralS temp;
		cin >> temp.solid >> temp.vain;

		temp.value = sqrt(pow(temp.solid, 2)+ pow(temp.vain, 2));
		pluralList.push_back(temp);
	}
	sort(pluralList.begin(), pluralList.end(), compare1063);
	printf("%.2f%", pluralList[0].value);


}


_1063::~_1063()
{
}
