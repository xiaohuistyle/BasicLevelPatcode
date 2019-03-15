#include "pch.h"
#include "_1031.h"


_1031::_1031()
{
	int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int ZArray[11] = { 0 ,1, 2, 3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
	char MArray[11] = { '1', '0', 'X', '9' ,'8', '7' ,'6' ,'5', '4' ,'3', '2'};
	int N;
	cin >> N;
	string credit[100];
	int count = 0;
	bool outController[100];
	///��ʼ��
	for (int i = 0; i < N; i++)
	{
		cin >> credit[i];
	}
	
	//��������
	for (int i = 0; i < N; i++)
	{
		int sum = 0;
		///���һλ�Ǽ��
		char check = credit[i][credit[i].length() - 1];
		
		bool error = true;
		for (int j = 0; j < credit[i].length()-1; j++)
		{
			if (credit[i][j]-'0'>=0&&credit[i][j]-'0'<=9)
			{
				sum += (credit[i][j]-'0') * weight[j];
			}
			else
			{
				count++;
				error = false;
				break;
			}
		}
		//��ĩβ��鲻�� ���� ǰʮ��λ��ȫΪ���� �����
		if (MArray[sum%11]-'0' != check-'0' ||  !error)
		{
			outController[i] = true;
		}
		else
		{
			outController[i] = false;
		}
		
	}
	if (count==0)
	{
		cout << "All passed";
	}
	for (int i = 0; i < N; i++)
	{
		if (outController[i])
		{
			if (i==N-1)
			{
				cout << credit[i];
			}
			else
			{
				cout << credit[i] <<"\n";
			}
			
		}
	}



}


_1031::~_1031()
{
}
