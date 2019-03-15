#include "pch.h"
#include "_1068.h"
#include <cstdlib>
bool isBlue(vector<vector<int>>listM,int temp,int x,int y,int TOL,int M,int N) {//x��y��
	//Ĭ�Ϸ���true ��Ĭ�������̵�
	int xA[8] = {0,0,-1,1,-1,1,-1,1};
	int yA[8] = {1,-1,0,0,1,1,-1,-1};
	for (int i = 0; i < 8; i++)//�����ж�
	{
		int nx = xA[i];
		int ny = yA[i];
		if (x + nx>=0 && x + nx< M && y + ny>=0 && y + ny < N)//���Ϸ�Χ
		{
			int ab = abs(listM[x + nx][y + ny] - temp);
			if (ab < TOL)//�������һ����С�ڷ�Χ����˵㲻���̵�
			{
				return false;
			}
		}
	}
	return true;

}


_1068::_1068()
{
	int M, N, TOL;
	cin >> M >> N >> TOL;
	vector<vector<int>> listN;
	for (int i = 0; i < N; i++)//6��
	{
		vector<int> listM;
		for (int j = 0; j < M; j++)//8��
		{
			int temp;
			cin >> temp;
			listM.push_back(temp);

		}
		listN.push_back(listM);
	}
	int count = 0;
	int placeX = 0;
	int placeY = 0;
	for (int i = 0; i < N; i++)//
	{
		for (int j = 0; j < M; j++)
		{
			bool flag = isBlue(listN, listN[i][j] , i , j , TOL,N,M);
			if (flag)
			{
				if (count == 0)
				{
					placeX = i;
					placeY = j;
				}
				count++;
			}

		}
	}
	if (count == 0)
	{
		cout << "Not Exist";
	}
	else if (count == 1)
	{
		printf("(%d,%d): %d", placeX+1, placeY+1,listN[placeX][placeY]);
	}
	else if(count >= 2)
	{
		cout << "Not Unique";
	}



}


_1068::~_1068()
{
}
