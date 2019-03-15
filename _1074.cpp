#include "pch.h"
#include "_1074.h"


_1074::_1074()
{
	stack<int> s_bit,s_num1,s_num2,res;
	char a;
	while ((a=cin.get())!='\n')
	{
		s_bit.push(a-'0');
	}
	while ((a = cin.get()) != '\n')
	{
		s_num1.push(a - '0');
	}
	while ((a = cin.get()) != '\n')
	{
		s_num2.push(a - '0');
	}
	int remainder=0, count;
	while (!s_num1.empty()&&!s_num2.empty())//若两个栈都不为空
	{
		count = s_num1.top() + s_num2.top()+ remainder;
		s_num1.pop();
		s_num2.pop();
		int D = s_bit.top();
		if (!D)
		{
			D += 10;
		}
		res.push(count % D);
		remainder = count / D;
		s_bit.pop();
	}
	while (!s_num1.empty())
	{
		count = s_num1.top() + remainder;
		s_num1.pop();
		int D = s_bit.top();
		if (!D)
		{
			D += 10;
		}
		res.push(count % D);
		remainder = count / D;
		s_bit.pop();
	}
	while (!s_num2.empty())
	{
		count = s_num2.top() + remainder;
		s_num2.pop();
		int D = s_bit.top();
		if (!D)
		{
			D += 10;
		}
		res.push(count % D);
		remainder = count / D;
		s_bit.pop();
	}
	res.push(remainder);
	while (res.size()>1&&res.top()==0)
	{
		res.pop();
	}
	while (!res.empty())
	{
		cout << res.top();
		res.pop();
	}


	
}


_1074::~_1074()
{
}
