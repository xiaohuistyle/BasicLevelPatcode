#include "pch.h"
#include "_1017.h"
#include<iostream>
#include<string>

using namespace std;

_1017::_1017()
{
	string A;
	int B, div, mod;
	unsigned int len;
	cin >> A>> B;
	len = A.length();
	div = (A[0] - '0') / B;

	mod = (A[0] - '0') % B;
	///���������һλ�������̲�Ϊ��
	if (div != 0|| len == 1)
	{
		cout << div;
	}
	///��λ���м���
	for (int i = 0; i < len; i++)
	{

		div = (mod * 10 + (A[i] - '0')) / B;
		cout << div;
		mod = (mod * 10 + (A[i] - '0')) % B;
	}
	cout << ' ' << mod;
}


_1017::~_1017()
{
}
