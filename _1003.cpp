#include "pch.h"
#include "_1003.h"
#include<iostream>
#include<string>
using namespace std;

_1003::_1003()
{
	int n, j, i;
	int countP=0, countA=0, countT=0, flag = 1;
	char s[100];
	char *p1, *p2;
	///����һ��100���ռ�� ÿ����СΪ100���ַ�����
	string res[10];
	cin >> n;
	
	for (i = 0; i < n; ++i) {
		cin >> s;
		for (j = 0; s[j] != '\0'; j++){
			if (s[j] == 'P'){
				countP++;
			}
			else if (s[j] == 'A'){
				countA++;
			}
			else if (s[j] == 'T'){
				countT++;
			}
			else {
				flag = 2;
				break;
			}
		}
		/// P T �������ַ����ɳ���һ��A�������ٴ��ڵ���һ��
		if (flag == 1 && countP == 1 && countT == 1 && countA != 0) {
			p1 = strchr(s, 'P');
			p2 = strchr(s, 'T');
			///��Ϊ����pat�������ַ������Բ��õ����б����ĸ ���м��� ���վ���
			///(p1 - s)��P֮ǰ�� (p2 - p1 - 1)��P T�м�� 
			///��ʽ���
			int right = (p1 - s)*(p2 - p1 - 1);
			int left = strlen(p2) - 1;
			if (right == left) {
				flag = 0;
			}
		}
		if (flag == 0) {
			 
			res[i] = "YES";
		}
		else {
			res[i] = "NO";
			
		}
	}
	for (int k = 0; k < n; k++)
	{
		if (k!=n-1)
		{
			cout << res[k] << "\n";
		}
		else
		{
			cout << res[k];
		}
		
	}
}



_1003::~_1003()
{
}
