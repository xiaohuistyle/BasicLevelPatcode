#include "pch.h"
#include "_1025.h"

typedef struct node
{
	string Address;
	int Data;
	string Next;
}DlinkList;
_1025::_1025()
{
	int nodeNum,K;
	string firstAddress;


	cin >> firstAddress >> nodeNum >> K;
	node nodeList[1000],printNodeList[1000],goodNode[1000];
	
	///�����漰��ʼ������
	for (int i = 1; i < nodeNum + 1; i++)
	{
		string Address, Next; int Data;
		cin >> Address >> Data >> Next;
		nodeList[i].Address = Address;
		nodeList[i].Data = Data;
		nodeList[i].Next = Next;
	}
	bool flag = true;
	int sub;
	string replace;
	int count = 0;
	int goodnodesub = 1;

	int findsub=1;
	///�����ݽ��б�׼��
	while (firstAddress !="-1")
	{
		///���Խ�� �ض���ָ��
		if (findsub >= nodeNum + 1)
		{
			findsub = 1;
		}
		if (nodeList[findsub].Address == firstAddress)
		{
			goodNode[goodnodesub].Address = nodeList[findsub].Address;
			goodNode[goodnodesub].Data = nodeList[findsub].Data;
			//��next ִ�����֮��Ž����±� ���Լ�
			goodNode[goodnodesub++].Next = nodeList[findsub].Next;
			firstAddress = nodeList[findsub].Next;
			
		}
		findsub++;
	}

	while (flag)
	{		
		for (int j = nodeNum/K; j > 0; j--)
		{
			replace = goodNode[K*j].Next;
			sub = K * j - K + 1;
			for (int i = K * j; i > K * j - K; i--)
			{
				
				printNodeList[sub].Address = goodNode[i].Address;
				printNodeList[sub].Data = goodNode[i].Data;
				printNodeList[sub].Next = goodNode[i - 1].Address;
				//��λ �ٽ��λ��
				if (sub == j * K )
				{
					printNodeList[sub].Next = replace;
				}
				sub++;
				count++;
			}
		}
		
		for (int i = 0; i < nodeNum % K; i++)
		{
			
			printNodeList[count + 1].Address = goodNode[count + 1].Address;
			printNodeList[count + 1].Data = goodNode[count + 1].Data;
			printNodeList[count + 1].Next = goodNode[count + 1].Next;
			count++;
		}
		flag = false;
	}
	for (int i = 1; i <= count; i++)
	{
		if (i==count)
		{
			cout << printNodeList[i].Address << ' ' << printNodeList[i].Data << ' ' << printNodeList[i].Next;
		}
		else
		{
			cout << printNodeList[i].Address << ' ' << printNodeList[i].Data << ' ' << printNodeList[i].Next << "\n";
		}
		
	}
}


_1025::~_1025()
{
}

//ƽ̨�ύ��
//#include<iostream>
//#include<string>
//#include<malloc.h>//�����Զ��Ŀռ�
//#include <algorithm>//һЩ���õ��㷨
//#include<vector> //��ʾ����
//#include <iomanip>//����cout���������
//using namespace std;
//typedef struct node
//{
//	string Address;
//	int Data;
//	string Next;
//}DlinkList;
//int main() {
//
//
//	int nodeNum, K;
//	string firstAddress;
//
//
//	cin >> firstAddress >> nodeNum >> K;
//	node nodeList[1000], printNodeList[1000], goodNode[1000];
//
//	�����漰��ʼ������
//	for (int i = 1; i < nodeNum + 1; i++)
//	{
//		string Address, Next; int Data;
//		cin >> Address >> Data >> Next;
//		nodeList[i].Address = Address;
//		nodeList[i].Data = Data;
//		nodeList[i].Next = Next;
//	}
//	bool flag = true;
//	int sub;
//	string replace;
//	int count = 0;
//	int goodnodesub = 1;
//
//	int findsub = 1;
//	�����ݽ��б�׼��
//	while (firstAddress != "-1")
//	{
//		���Խ�� �ض���ָ��
//		if (findsub >= nodeNum + 1)
//		{
//			findsub = 1;
//		}
//		if (nodeList[findsub].Address == firstAddress)
//		{
//			goodNode[goodnodesub].Address = nodeList[findsub].Address;
//			goodNode[goodnodesub].Data = nodeList[findsub].Data;
//			��next ִ�����֮��Ž����±� ���Լ�
//			goodNode[goodnodesub++].Next = nodeList[findsub].Next;
//			firstAddress = nodeList[findsub].Next;
//
//		}
//		findsub++;
//	}
//
//	while (flag)
//	{
//		for (int j = nodeNum / K; j > 0; j--)
//		{
//			replace = goodNode[K*j].Next;
//			sub = K * j - K + 1;
//			for (int i = K * j; i > K * j - K; i--)
//			{
//
//				printNodeList[sub].Address = goodNode[i].Address;
//				printNodeList[sub].Data = goodNode[i].Data;
//				printNodeList[sub].Next = goodNode[i - 1].Address;
//				��λ �ٽ��λ��
//				if (sub == j * K)
//				{
//					printNodeList[sub].Next = replace;
//				}
//				sub++;
//				count++;
//			}
//		}
//
//		for (int i = 0; i < nodeNum % K; i++)
//		{
//
//			printNodeList[count + 1].Address = goodNode[count + 1].Address;
//			printNodeList[count + 1].Data = goodNode[count + 1].Data;
//			printNodeList[count + 1].Next = goodNode[count + 1].Next;
//			count++;
//		}
//		flag = false;
//	}
//	for (int i = 1; i <= count; i++)
//	{
//		if (i == count)
//		{
//			cout << printNodeList[i].Address << ' ' << printNodeList[i].Data << ' ' << printNodeList[i].Next;
//		}
//		else
//		{
//			cout << printNodeList[i].Address << ' ' << printNodeList[i].Data << ' ' << printNodeList[i].Next << "\n";
//		}
//
//	}
//
//
//	return 0;
//}
