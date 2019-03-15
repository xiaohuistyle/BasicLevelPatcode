#include "pch.h"
#include "_1070.h"

int half(int num,int add) {
	return num / 2 + add / 2;
}
bool compareUp(int a,int b){

	return a < b;

}



_1070::_1070()
{
	int N;
	cin >> N;
	vector<int> num;
	//int* num = (int *)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		num.push_back(temp);
	}
	sort(num.begin(),num.end(),compareUp);
	int len = 0;
	int newLen = half(num[0], num[1]);
	for (int i = 2; i < N; i++)
	{
		newLen = half(newLen,num[i]);
	}
	cout << newLen;




}


_1070::~_1070()
{
}
