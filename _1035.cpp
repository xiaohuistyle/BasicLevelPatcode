#include "pch.h"
#include "_1035.h"


/*
˼·��
���˵�м��������������֮������һ������Ϊֱ�Ӳ�������
���˵�м�Ԫ�ؾֲ����򣬵��Ǵ󲿷���Ȼ������˵�����ǹ鲢����




*/

_1035::_1035()
{
	int N;
	cin >> N;
	vector<int> origin, target;
	
	int value;
	for (int i = 0; i < N; i++){
		
		cin >> value;
		origin.push_back(value);
	}

	for (int i = 0; i < N; i++)
	{
		
		cin >> value;
		target.push_back(value);
	}
	int index;
	for (int i = 1; i < N; i++)
	{

		if (target[i]<target[i-1])
		{
			index = i;
			break;
		}
	}
	bool flag = true;
	for (int i = index; i < N; i++)
	{
		//����в�һ���� ��Ϊ�鲢���� �鲢�����ж�Ϊfalse
		if (origin[i]!=target[i])
		{
			flag = false;
			break;
		}
	}
	//�����ֱ�Ӳ������� �����һ����������
	if (flag)
	{
		cout << "Insertion Sort"<<"\n";
		//��ǰ index���ַ��������� �����һ��������ֱ�Ӳ������������
		sort(origin.begin(),origin.begin() + index + 1);
		for (int i = 0; i < N; i++)
		{
			if (i != N-1)
			{
				cout << origin[i] << " ";
			}
			else
			{
				cout << origin[i];
			}		
		}
	}
	else//����ǹ鲢����
	{
		cout << "Merge Sort"<<"\n";
		bool isNotEqual = true;
		int k = 1;
		while (isNotEqual) {
			isNotEqual = false;
			if (!equal(origin.begin(),origin.end(),target.begin()))
			{
				//���˵��������������в���� ��һ��Ϊ �ͽ���һ�ι鲢����
				isNotEqual = true;
			}
			k *= 2;
			//���Լ����Ĳ�����ʽ���в��㣬���ʹ�ü����������
			for (int i = 0; i < N/k; i++)
			{
				sort(origin.begin() + i* k, origin.begin()+(i+1)*k );
			}
			//
			//sort(origin.begin()+ k * (N / k),origin.end());
		}
		for (int i = 0; i < N; i++)
		{
			if (i != N - 1)
			{
				cout << origin[i] << " ";
			}
			else
			{
				cout << origin[i];
			}
		}
	}


	

}


_1035::~_1035()
{
}
//�ύ�����

//#include<iostream>
//#include<string>
//#include<malloc.h>//�����Զ��Ŀռ�
//#include <algorithm>//һЩ���õ��㷨
//#include<vector> //��ʾ����
//#include <iomanip>//����cout���������
//using namespace std;
//
//
//int main() {
//
//	int N;
//	cin >> N;
//	vector<int> origin, target;
//
//	int value;
//	for (int i = 0; i < N; i++) {
//
//		cin >> value;
//		origin.push_back(value);
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//
//		cin >> value;
//		target.push_back(value);
//	}
//	int index;
//	for (int i = 1; i < N; i++)
//	{
//
//		if (target[i] < target[i - 1])
//		{
//			index = i;
//			break;
//		}
//	}
//	bool flag = true;
//	for (int i = index; i < N; i++)
//	{
//		//����в�һ���� ��Ϊ�鲢���� �鲢�����ж�Ϊfalse
//		if (origin[i] != target[i])
//		{
//			flag = false;
//			break;
//		}
//	}
//	//�����ֱ�Ӳ������� �����һ����������
//	if (flag)
//	{
//		cout << "Insertion Sort" << "\n";
//		//��ǰ index���ַ��������� �����һ��������ֱ�Ӳ������������
//		sort(origin.begin(), origin.begin() + index + 1);
//		for (int i = 0; i < N; i++)
//		{
//			if (i != N - 1)
//			{
//				cout << origin[i] << " ";
//			}
//			else
//			{
//				cout << origin[i];
//			}
//		}
//	}
//	else//����ǹ鲢����
//	{
//		cout << "Merge Sort" << "\n";
//		bool isNotEqual = true;
//		int k = 1;
//		while (isNotEqual) {
//			isNotEqual = false;
//			if (!equal(origin.begin(), origin.end(), target.begin()))
//			{
//				//���˵��������������в���� ��һ��Ϊ �ͽ���һ�ι鲢����
//				isNotEqual = true;
//			}
//			k *= 2;
//			//���Լ����Ĳ�����ʽ���в��㣬���ʹ�ü����������
//			for (int i = 0; i < N / k; i++)
//			{
//				sort(origin.begin() + i * k, origin.begin() + (i + 1)*k);
//			}
//			//
//			//sort(origin.begin()+ k * (N / k),origin.end());
//		}
//		for (int i = 0; i < N; i++)
//		{
//			if (i != N - 1)
//			{
//				cout << origin[i] << " ";
//			}
//			else
//			{
//				cout << origin[i];
//			}
//		}
//	}
//	return 0;
//
//}
