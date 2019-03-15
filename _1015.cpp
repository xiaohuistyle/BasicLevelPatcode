#include "pch.h"
#include "_1015.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
#include<vector> //��ʾ����
#include <iomanip>//����cout���������
using namespace std;
struct student
{
	int number;
	int virtueScore;
	int abilityScore;
	int allScore;
};

bool compare(student a, student b)
{
	if (a.allScore > b.allScore)
		return true;
	else if (a.allScore == b.allScore)
	{
		if (a.virtueScore > b.virtueScore)
			return true;
		else if (a.virtueScore == b.virtueScore)
		{
			if (a.number < b.number)
				return true;
		}
	}
	return false;
}
_1015::_1015()
{
	int N, L, H;
	cin >> N >> L >> H;
	
	student *stu = (student*)malloc(sizeof(student)*N);
	
	vector<student> v1, v2, v3, v4;


	for (int i = 0; i < N; i++)
	{
		cin >> stu[i].number>> stu[i].virtueScore>>stu[i].abilityScore;
		stu[i].allScore = stu[i].virtueScore + stu[i].abilityScore;
	}
	///��������Ĵ��������õ� Ȼ���ٽ����ֵܷ�����  һ������һ�߲���
	student *arrayout = (student*)malloc(sizeof(student)*N);
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		///��Ҫ��������� ���п��ܱ�¼ȡ
		if (stu[i].virtueScore >= L && stu[i].abilityScore >= L)
		{
			count++;
			/// ��һ�� �²ŷ־�������¼ȡ��
			if (stu[i].abilityScore >= H && stu[i].virtueScore >= H)
			{
				///����Ҫ���������������
				v1.push_back(stu[i]);
			}
			else
			/// �ڶ��� �·ֹ��ߣ��ŷ�δ����
			if (stu[i].virtueScore >= H && stu[i].abilityScore < H)
			{
				v2.push_back(stu[i]);
				
			}
			else 
			/// ������  ����������¼ȡ�ߣ����ǵ·ִ��ڲŷ�
			if ((stu[i].virtueScore < H && stu[i].abilityScore < H) && (stu[i].abilityScore <= stu[i].virtueScore))
			{
				v3.push_back(stu[i]);
			}
			else
			{
				v4.push_back(stu[i]);
			}
		}
	}
	sort(v1.begin(), v1.end(), compare);
	sort(v2.begin(), v2.end(), compare);
	sort(v3.begin(), v3.end(), compare);
	sort(v4.begin(), v4.end(), compare);
	cout << count << "\n";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i].number << ' ' << v1[i].virtueScore << ' ' << v1[i].abilityScore << ' ' << "\n";
	}
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i].number << ' ' << v2[i].virtueScore << ' ' << v2[i].abilityScore << ' ' << "\n";
	}
	for (int i = 0; i < v3.size(); i++)
	{
		cout << v3[i].number << ' ' << v3[i].virtueScore << ' ' << v3[i].abilityScore << ' ' << "\n";
	}
	for (int i = 0; i < v4.size(); i++)
	{
		if (i==v4.size()-1)
		{
			cout << v4[i].number << ' ' << v4[i].virtueScore << ' ' << v4[i].abilityScore;
		}
		else
		{
			cout << v4[i].number << ' ' << v4[i].virtueScore << ' ' << v4[i].abilityScore << ' ' << "\n";
		}

		
	}
}
_1015::~_1015()
{
}



	///ֱ�Ӳ���������� ���ǲ����ʣ����Է���
	/*int  high;
	int tempnumber, tempabilityScore, tempvirtueScore, tempallScore;
	for (int i = 0; i < count - 1; i++)
	{
		///Ĭ��ÿ�������ĵ�һ��Ϊ����
		high = i;
		///��i֮�������������͵�
		for (int j = i + 1; j < count; j++)
		{
			///�ұ�Ĭ�����Ļ�Ҫ�����
			if (arrayout[j].allScore > arrayout[high].allScore)
			{
				high = j;
			}
		}
		///���˵�ҵ���Ĭ�����Ļ�Ҫ��� ���������λ�õĽ���
		if (high != i)
		{
			tempnumber = arrayout[high].number;
			tempabilityScore = arrayout[high].abilityScore;
			tempvirtueScore = arrayout[high].virtueScore;
			tempallScore = arrayout[high].allScore;

			arrayout[high].number = arrayout[i].number;
			arrayout[high].abilityScore = arrayout[i].abilityScore;
			arrayout[high].virtueScore = arrayout[i].virtueScore;
			arrayout[high].allScore = arrayout[i].allScore;

			arrayout[i].number = tempnumber;
			arrayout[i].abilityScore = tempabilityScore;
			arrayout[i].virtueScore = tempvirtueScore;
			arrayout[i].allScore = tempallScore;
		}
	}*/


///�����ύ��
//#include<iostream>
//#include<string>
//#include<malloc.h>
//#include <algorithm>
//#include<vector> //��ʾ����
//#include <iomanip>//����cout���������
//using namespace std;
//struct student
//{
//	int number;
//	int virtueScore;
//	int abilityScore;
//	int allScore;
//};
//bool compare(student a, student b)
//{
//	if (a.allScore > b.allScore)
//		return true;
//	else if (a.allScore == b.allScore)
//	{
//		if (a.virtueScore > b.virtueScore)
//			return true;
//		else if (a.virtueScore == b.virtueScore)
//		{
//			if (a.number < b.number)
//				return true;
//		}
//	}
//	return false;
//}
//int main() {
//	int N, L, H;
//	cin >> N >> L >> H;
//
//	student *stu = (student*)malloc(sizeof(student)*N);
//
//	vector<student> v1, v2, v3, v4;
//
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> stu[i].number >> stu[i].virtueScore >> stu[i].abilityScore;
//		stu[i].allScore = stu[i].virtueScore + stu[i].abilityScore;
//	}
//	///��������Ĵ��������õ� Ȼ���ٽ����ֵܷ�����  һ������һ�߲���
//	student *arrayout = (student*)malloc(sizeof(student)*N);
//	int count = 0;
//	for (int i = 0; i < N; i++)
//	{
//		///��Ҫ��������� ���п��ܱ�¼ȡ
//		if (stu[i].virtueScore >= L && stu[i].abilityScore >= L)
//		{
//			count++;
//			/// ��һ�� �²ŷ־�������¼ȡ��
//			if (stu[i].abilityScore >= H && stu[i].virtueScore >= H)
//			{
//				///����Ҫ���������������
//				v1.push_back(stu[i]);
//			}
//			else
//				/// �ڶ��� �·ֹ��ߣ��ŷ�δ����
//				if (stu[i].virtueScore >= H && stu[i].abilityScore < H)
//				{
//					v2.push_back(stu[i]);
//
//				}
//				else
//					/// ������  ����������¼ȡ�ߣ����ǵ·ִ��ڲŷ�
//					if ((stu[i].virtueScore < H && stu[i].abilityScore < H) && (stu[i].abilityScore <= stu[i].virtueScore))
//					{
//						v3.push_back(stu[i]);
//					}
//					else
//					{
//						v4.push_back(stu[i]);
//					}
//		}
//	}
//	sort(v1.begin(), v1.end(), compare);
//	sort(v2.begin(), v2.end(), compare);
//	sort(v3.begin(), v3.end(), compare);
//	sort(v4.begin(), v4.end(), compare);
//	cout << count << "\n";
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i].number << ' ' << v1[i].virtueScore << ' ' << v1[i].abilityScore << ' ' << "\n";
//	}
//	for (int i = 0; i < v2.size(); i++)
//	{
//		cout << v2[i].number << ' ' << v2[i].virtueScore << ' ' << v2[i].abilityScore << ' ' << "\n";
//	}
//	for (int i = 0; i < v3.size(); i++)
//	{
//		cout << v3[i].number << ' ' << v3[i].virtueScore << ' ' << v3[i].abilityScore << ' ' << "\n";
//	}
//	for (int i = 0; i < v4.size(); i++)
//	{
//
//		if (i == v4.size() - 1)
//		{
//			cout << v4[i].number << ' ' << v4[i].virtueScore << ' ' << v4[i].abilityScore;
//		}
//		else
//		{
//			cout << v4[i].number << ' ' << v4[i].virtueScore << ' ' << v4[i].abilityScore << ' ' << "\n";
//		}
//	}
//}
