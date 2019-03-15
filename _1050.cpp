#include "pch.h"
#include "_1050.h"


bool compare1050(int a,int b) {
	return a > b;

}

_1050::_1050()
{
	vector<int> list;
	
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		list.push_back(temp);
	}
	int n = sqrt(N), m;
	while (N % n != 0)//找到第一个能背整除的n
	{
		n--;
	}
	m = N / n;
	
	sort(list.begin(), list.end(), compare1050);
	vector<vector<int>> T(m, vector<int>(n));
	vector<vector<bool>> vis(m, vector<bool>(n));

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			vis[i][j] = false;
		}
	}
	int dx[] = { 0, 1, 0, -1 }, dy[] = { 1, 0, -1, 0 }, di = 0;
	int k = 0,i = 0,j = 0;
	do
	{
		T[i][j] = list[k++];
		vis[i][j] = true;
		int nextI = dx[di] + i,nextJ = dy[di] + j;//提前计算下一步会不会碰壁
		if (nextI <0|| nextI >=m|| nextJ <0|| nextJ >=n||vis[nextI][nextJ])//测试碰壁条件
		{
			di = (di + 1) % 4;//碰一次壁，切换一次方向
		}
		i += dx[di];
		j += dy[di];
	} while (k<N);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << T[i][j];
			if (j != n-1)
			{
				cout << " ";
			}
		}
		if (i != m-1)
		{
			cout << "\n";
		}
	}





}


_1050::~_1050()
{
}
