#include "pch.h"
#include "_1018.h"

struct rowData
{
	char jia;
	char yi;
};
_1018::_1018()
{
	int count;
	cin >> count;
	int flagCount=count;
	rowData *alldata = (rowData*)malloc(sizeof(rowData)*count);
	///��������
	while (flagCount--)
	{
		cin >> alldata[flagCount].jia>>alldata[flagCount].yi;
	}
	int jiawin = 0, yiwin = 0, jiafail = 0, yifail = 0, jiapallet = 0, yipallet = 0;
	int jiaBcount = 0, jiaJcount = 0, jiaCcount = 0, yiBcount = 0, yiJcount = 0, yiCcount = 0;

	flagCount = count;
	//���бȽ�
	while (flagCount--)
	{
		//���в��ıȽ�
		if (alldata[flagCount].jia=='B')
		{
			
			if (alldata[flagCount].yi=='C')
			{
				jiawin++;
				yifail++;
				jiaBcount++;
			}
			else if (alldata[flagCount].yi=='J')
			{
				jiafail++;
				yiwin++;
				yiJcount++;
			}
			else
			{
				jiapallet++;
				yipallet++;
			}
		}
		if (alldata[flagCount].jia=='C')
		{
			if (alldata[flagCount].yi == 'B')
			{
				jiafail++;
				yiwin++;
				yiBcount++;
			}
			else if(alldata[flagCount].yi=='J')
			{
				jiawin++;
				yifail++;
				jiaCcount++;
			}
			else
			{
				jiapallet++;
				yipallet++;
			}
		}
		if (alldata[flagCount].jia=='J')
		{
			if (alldata[flagCount].yi=='C')
			{
				jiafail++;
				yiwin++;
				jiaJcount++;
			}
			else if (alldata[flagCount].yi == 'B')
			{
				jiawin++;
				yifail++;
				yiBcount;
			}
			else
			{
				jiapallet++;
				yipallet++;
			}
		}
	}
	cout << jiawin <<' '<< jiapallet   <<' ' << jiafail <<"\n";
	cout << yiwin <<' '<< yipallet <<' ' <<    yifail <<' '<<"\n";




	if (jiaBcount>jiaCcount)
	{
		if (jiaBcount>jiaJcount)
		{
			cout << "B ";
		}
		else
		{
			cout << "J ";
		}
	}
	else
	{
		if (jiaCcount>jiaJcount)
		{
			cout << "C ";
		}
		else
		{
			cout << "J ";
		}
	}

	if (yiBcount > yiCcount)
	{
		if (yiBcount > yiJcount)
		{
			cout << 'B';
		}
		else
		{
			cout << 'J';
		}
	}
	else
	{
		if (yiCcount > yiJcount)
		{
			cout << 'C';
		}
		else
		{
			cout << 'J';
		}
	}
}


_1018::~_1018()
{
}

///ƽ̨�ύ�� 10�� ��ͨ��һ�����Ե�

//#include<iostream>
//#include<string>
//#include<malloc.h>//�����Զ��Ŀռ�
//#include <algorithm>//һЩ���õ��㷨
//#include<vector> //��ʾ����
//#include <iomanip>//����cout���������
//using namespace std;
//struct rowData
//{
//	char jia;
//	char yi;
//};
//
//
//int main() {
//
//
//	int count;
//	cin >> count;
//	int flagCount = count;
//	rowData *alldata = (rowData*)malloc(sizeof(rowData)*count);
//	///��������
//	while (flagCount--)
//	{
//		cin >> alldata[flagCount].jia >> alldata[flagCount].yi;
//	}
//	int jiawin = 0, yiwin = 0, jiafail = 0, yifail = 0, jiapallet = 0, yipallet = 0;
//	int jiaBcount = 0, jiaJcount = 0, jiaCcount = 0, yiBcount = 0, yiJcount = 0, yiCcount = 0;
//
//	flagCount = count;
//	//���бȽ�
//	while (flagCount--)
//	{
//		//���в��ıȽ�
//		if (alldata[flagCount].jia == 'B')
//		{
//
//			if (alldata[flagCount].yi == 'C')
//			{
//				jiawin++;
//				yifail++;
//				jiaBcount++;
//			}
//			else if (alldata[flagCount].yi == 'J')
//			{
//				jiafail++;
//				yiwin++;
//				yiJcount++;
//			}
//			else
//			{
//				jiapallet++;
//				yipallet++;
//			}
//		}
//		if (alldata[flagCount].jia == 'C')
//		{
//			if (alldata[flagCount].yi == 'B')
//			{
//				jiafail++;
//				yiwin++;
//				yiBcount++;
//			}
//			else if (alldata[flagCount].yi == 'J')
//			{
//				jiawin++;
//				yifail++;
//				jiaCcount++;
//			}
//			else
//			{
//				jiapallet++;
//				yipallet++;
//			}
//		}
//		if (alldata[flagCount].jia == 'J')
//		{
//			if (alldata[flagCount].yi == 'C')
//			{
//				jiafail++;
//				yiwin++;
//				jiaJcount++;
//			}
//			else if (alldata[flagCount].yi == 'B')
//			{
//				jiawin++;
//				yifail++;
//				yiBcount;
//			}
//			else
//			{
//				jiapallet++;
//				yipallet++;
//			}
//		}
//	}
//	cout << jiawin << ' ' << jiapallet << ' ' << jiafail << "\n";
//	cout << yiwin << ' ' << yipallet << ' ' << yifail << "\n";
//
//
//
//
//	if (jiaBcount > jiaCcount)
//	{
//		if (jiaBcount > jiaJcount)
//		{
//			cout << "B ";
//		}
//		else
//		{
//			cout << "J ";
//		}
//	}
//	else
//	{
//		if (jiaCcount > jiaJcount)
//		{
//			cout << "C ";
//		}
//		else
//		{
//			cout << "J ";
//		}
//	}
//
//	if (yiBcount > yiCcount)
//	{
//		if (yiBcount > yiJcount)
//		{
//			cout << 'B';
//		}
//		else
//		{
//			cout << 'J';
//		}
//	}
//	else
//	{
//		if (yiCcount > yiJcount)
//		{
//			cout << 'C';
//		}
//		else
//		{
//			cout << 'J';
//		}
//	}
//
//
//
//}
