#include "pch.h"
#include "_1023.h"

bool compare(int a , int b) {

	return a < b;
}

_1023::_1023()
{
	int n[10], sum = 0;
	for (int i = 0; i < 10; ++i) {
		cin >> n[i];
		//scanf("%d", &n[i]);
		sum += n[i];
	}
	///�����һ����֮������ѭ��
	for (int k = 1; k < 10; ++k) {
		if (n[k] > 0) {
			//printf("%d", k);
			cout << k;
			n[k]--;
			break;
		}
	}
	///���������������������
	for (int l = 0; l < 10; ++l) {
		for (int m = 0; m < n[l]; ++m) {
			//printf("%d", l);
			cout << l;
		}
	}
	//printf("%c", '\n');
}


_1023::~_1023()
{
}
///ƽ̨�ύ��
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n[10], sum = 0;
//	for (int i = 0; i < 10; ++i) {
//		scanf("%d", &n[i]);
//		sum += n[i];
//	}
//	for (int k = 1; k < 10; ++k) {
//		if (n[k] > 0) {
//			printf("%d", k);
//			n[k]--;
//			break;
//		}
//	}
//	for (int l = 0; l < 10; ++l) {
//		for (int m = 0; m < n[l]; ++m) {
//			printf("%d", l);
//		}
//	}
//	printf("%c", '\n');
//	return 0;
//}
//




///���������� ������ʵ������һ�ִ��� 
//bool compare(int a, int b) {
//
//	return a < b;
//}
//int main() {
//
//	int a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	int min = 9;
//	sort(a, a + 10, compare);
//	for (int i = 0; i < 10; i++)
//	{
//		//�ҳ�0����С����
//		if (a[min] >= a[i] && a[i] != 0)
//		{
//			min = i;
//		}
//	}
//
//	cout << a[min];//��������������һλ
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (i != min)
//		{
//			cout << a[i];
//		}
//	}
//
//	return 0;
//}