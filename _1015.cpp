#include "pch.h"
#include "_1015.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
#include<vector> //表示向量
#include <iomanip>//用于cout的输出控制
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
	///分类数组的处理，这样好点 然后再进行总分的排序  一边排序，一边插入
	student *arrayout = (student*)malloc(sizeof(student)*N);
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		///均要大于最低线 才有可能被录取
		if (stu[i].virtueScore >= L && stu[i].abilityScore >= L)
		{
			count++;
			/// 第一类 德才分均过优先录取线
			if (stu[i].abilityScore >= H && stu[i].virtueScore >= H)
			{
				///现在要解决的是排序问题
				v1.push_back(stu[i]);
			}
			else
			/// 第二类 德分过线，才分未过线
			if (stu[i].virtueScore >= H && stu[i].abilityScore < H)
			{
				v2.push_back(stu[i]);
				
			}
			else 
			/// 第三类  均低于优先录取线，但是德分大于才分
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



	///直接插入排序过程 但是不合适，所以废弃
	/*int  high;
	int tempnumber, tempabilityScore, tempvirtueScore, tempallScore;
	for (int i = 0; i < count - 1; i++)
	{
		///默认每次搜索的第一个为最大的
		high = i;
		///在i之后的序列中找最低的
		for (int j = i + 1; j < count; j++)
		{
			///找比默认最大的还要大的数
			if (arrayout[j].allScore > arrayout[high].allScore)
			{
				high = j;
			}
		}
		///如果说找到比默认最大的还要大的 则进行两个位置的交换
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


///代码提交版
//#include<iostream>
//#include<string>
//#include<malloc.h>
//#include <algorithm>
//#include<vector> //表示向量
//#include <iomanip>//用于cout的输出控制
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
//	///分类数组的处理，这样好点 然后再进行总分的排序  一边排序，一边插入
//	student *arrayout = (student*)malloc(sizeof(student)*N);
//	int count = 0;
//	for (int i = 0; i < N; i++)
//	{
//		///均要大于最低线 才有可能被录取
//		if (stu[i].virtueScore >= L && stu[i].abilityScore >= L)
//		{
//			count++;
//			/// 第一类 德才分均过优先录取线
//			if (stu[i].abilityScore >= H && stu[i].virtueScore >= H)
//			{
//				///现在要解决的是排序问题
//				v1.push_back(stu[i]);
//			}
//			else
//				/// 第二类 德分过线，才分未过线
//				if (stu[i].virtueScore >= H && stu[i].abilityScore < H)
//				{
//					v2.push_back(stu[i]);
//
//				}
//				else
//					/// 第三类  均低于优先录取线，但是德分大于才分
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
