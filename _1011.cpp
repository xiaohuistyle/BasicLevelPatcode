#include "pch.h"
#include "_1011.h"
#include<iostream>
#include<string>
#include<malloc.h>
#include <algorithm>
using namespace std;

_1011::_1011()
{

	///һ��intռ�ĸ��ֽڣ�һ���ֽ���8λ������һ��int���Է�2^32�η��������ոշ�����Ŀ��Ҫ��,���ǻ���ֱ߽������long�Ͳ���
	int T;
	cin >> T;
	int case_number = 1;
	long A;
	long B;
	long C;
	while (T--)
	{
		cin >> A;
		cin >> B;
		cin >> C;
		if (A + B > C)
		{
			cout << "Case #" << case_number << ": true" << endl;
		}
		else {
			cout << "Case #" << case_number << ": false" << endl;
		}
		case_number++;
	}


}


_1011::~_1011()
{
}
///�ύ��
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//	int case_number = 1;
//	long A;
//	long B;
//	long C;
//	while (T--)
//	{
//		cin >> A;
//		cin >> B;
//		cin >> C;
//		if (A + B > C)
//		{
//			cout << "Case #" << case_number << ": true" << endl;
//		}
//		else {
//			cout << "Case #" << case_number << ": false" << endl;
//		}
//		case_number++;
//	}
//	return 0;
//}
