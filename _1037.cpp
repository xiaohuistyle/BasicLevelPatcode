#include "pch.h"
#include "_1037.h"

//������ǹ����������ԣ����֪��ħ�����������Լ��Ļ���ϵͳ ���� ���纣����߹����ģ�
//��ʮ�߸�������(Sickle)��һ����¡(Galleon)����ʮ�Ÿ�����(Knut)��һ�����ɣ������ס���
//���ڣ���������Ӧ���ļ�Ǯ P ����ʵ����Ǯ A�����������дһ��������������Ӧ�ñ��ҵ���Ǯ��
//
//�����ʽ��
//
//������ 1 ���зֱ���� P �� A����ʽΪ Galleon.Sickle.Knut������� 1 ���ո�ָ������� Galleon ��[0, 10
//7
//] �����ڵ�������Sickle ��[0, 17) �����ڵ�������Knut ��[0, 29) �����ڵ�������
//
//�����ʽ��
//
//��һ������������ͬ���ĸ�ʽ�������Ӧ�ñ��ҵ���Ǯ�������û����Ǯ����ô�����Ӧ���Ǹ�����
//
//�������� 1��
//
//10.16.27 14.1.28
//������� 1��
//
//3.2.1
//�������� 2��
//
//14.1.28 10.16.27
//������� 2��
//
//- 3.2.1

/*
����ת������
�Ȼ�Ϊ�ܵ� ��� �ٻ�����
*/

struct countMoney
{
	int Galleon;
	int Sickle;
	int Knut;
};

_1037::_1037()
{
	//Ĭ���޽�λ
	bool flag = false;

	countMoney P ,A;

	//��������string �ٽ��зָ�
	
	//scanf("%d.%d.%d",&Galleon,&Sickle,&Knut);
	int Pcount, Acount;
	cin >> P.Galleon;
	getchar();
	cin >> P.Sickle;
	getchar();
	cin >> P.Knut;
	Pcount = P.Galleon * 17 * 29 + P.Sickle * 29 + P.Knut;
	//scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
	cin >> A.Galleon;
	getchar();
	cin >> A.Sickle;
	getchar();
	cin >> A.Knut;
	Acount = A.Galleon * 17 * 29 + A.Sickle * 29 + A.Knut;

	int difference =Acount - Pcount;

	if (difference > 0)
	{
		cout << difference / (17 * 29)<<"." << difference / 29 % 17 <<"."<< difference % 29;
	}
	else if (difference < 0)
	{
		cout <<  difference / (17 * 29) <<"." <<abs( difference / 29 % 17)<<"." <<abs( difference % 29);
	}

}


_1037::~_1037()
{
}

//���ύ�� ��������δ��
//#include<iostream>
//#include<string>
//#include<malloc.h>//�����Զ��Ŀռ�
//#include <algorithm>//һЩ���õ��㷨
//#include<vector> //��ʾ����
//#include <iomanip>//����cout���������
//using namespace std;
//
//struct countMoney
//{
//	int Galleon;
//	int Sickle;
//	int Knut;
//};
//int main() {
//	countMoney P, A;
//	//��������string �ٽ��зָ�
//	//scanf("%d.%d.%d",&Galleon,&Sickle,&Knut);
//	int Pcount, Acount;
//	cin >> P.Galleon;
//	getchar();
//	cin >> P.Sickle;
//	getchar();
//	cin >> P.Knut;
//	Pcount = P.Galleon * 17 * 29 + P.Sickle * 29 + P.Knut;
//	//scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
//	cin >> A.Galleon;
//	getchar();
//	cin >> A.Sickle;
//	getchar();
//	cin >> A.Knut;
//	Acount = A.Galleon * 17 * 29 + A.Sickle * 29 + A.Knut;
//
//	int difference = Acount - Pcount;
//
//	if (difference > 0)
//	{
//		cout << difference / (17 * 29) << "." << difference / 29 % 17 << "." << difference % 29;
//	}
//	else if (difference < 0)
//	{
//		cout << difference / (17 * 29) << "." << abs(difference / 29 % 17) << "." << abs(difference % 29);
//	}
//}
