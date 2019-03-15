#include "pch.h"
#include "_1075.h"

struct nodeS
{
	char Address[5];
	int Data;
	char Next[5];
};
bool compareUp(nodeS a, nodeS b) {
	return a.Data < b.Data;
}


_1075::_1075()
{
	char address[5];
	int M, K;
	cin >> address >> M >> K;
	vector<nodeS> littleList;
	vector<nodeS> bigList;
	for (int i = 0; i < M; i++)
	{
		nodeS temp;
		cin >> temp.Address >> temp.Data >> temp.Next;
		if (temp.Data<=K)
		{
			littleList.push_back(temp);
		}
		else
		{
			bigList.push_back(temp);
		}
	}
	sort(littleList.begin(),littleList.end(),compareUp);
	for (int i = 0; i < littleList.size(); i++)
	{
		//将后一个的地址付给前一个的next
		if (i!=littleList.size()-1)
		{
			strcpy_s(littleList[i].Next, strlen(littleList[i+1].Address) + 1, littleList[i + 1].Address);
			cout << littleList[i].Address << " " <<littleList[i].Data << " " <<littleList[i].Next<<"\n";
		}
		else
		{
			strcpy_s(littleList[i].Next, strlen(bigList[0].Address) + 1, bigList[0].Address);
			cout << littleList[i].Address<<" " << littleList[i].Data <<" "<< littleList[i].Next<<"\n";
		}

	}
	for (int i = 0; i < bigList.size(); i++)
	{
		if (i != bigList.size() - 1)
		{
			strcpy_s(bigList[i].Next, strlen(bigList[i+1].Next) + 1, bigList[i + 1].Address);
			cout << bigList[i].Address << " " << bigList[i].Data << " " << bigList[i].Next << "\n";
		}
		else
		{
			cout << bigList[i].Address << " " << bigList[i].Data << " " << "-1" << "\n";
		}
	}
	




}


_1075::~_1075()
{
}
