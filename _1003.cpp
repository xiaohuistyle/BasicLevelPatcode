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
	///申请一个100个空间的 每个大小为100的字符数组
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
		/// P T 这两个字符仅可出现一次A必须至少大于等于一次
		if (flag == 1 && countP == 1 && countT == 1 && countA != 0) {
			p1 = strchr(s, 'P');
			p2 = strchr(s, 'T');
			///因为仅有pat这三种字符，所以不用担心有别的字母 进行计算 按照距离
			///(p1 - s)算P之前的 (p2 - p1 - 1)算P T中间的 
			///等式相等
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
