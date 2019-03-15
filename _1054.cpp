#include "pch.h"
#include "_1054.h"


_1054::_1054()
{
	int N;
	cin >> N;
	string	list[100];
	int count = 0;
	double all = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> list[i];
		//此处验证是否合法
		bool flag = true;
		int dot = 0;
		int place = 0;
		for (int j = 0; j < list[i].length(); j++)
		{
			
			if (list[i][j] == '.')//最多一个小数点
			{
				dot++;
				place = j;
			}
			if (list[i][j]>=  'a' &&list[i][j]<= 'z'  ||list[i][j]>='A'  && list[i][j]<='Z')//只要存在一个非法字符
			{
				flag = false;
			}
		}
		int dotLen = 0;
		dotLen = list[i].length() - place - 1;
		if (!flag || dot > 1 || dotLen > 2)
		{
			cout << "ERROR: " << list[i] << " is not a legal number\n";
		}

		if (dot <= 1 && flag && dotLen <= 2)
		{
			
			if (stoi(list[i].c_str()) > -1000 && stoi(list[i].c_str()) < 1000)
			{
				//cout << atof(list[i].c_str());
				all += atof(list[i].c_str());
				count++;
			}
			else
			{
				cout << "ERROR: " << list[i] << " is not a legal number\n";
				
			}
		}
	}
	if (count)
	{
		printf("The average of %d number is %.2lf%", count, all / count);
		//cout << "The average of " << count << " number is " << all / count;
	}
	else
	{
		cout << "The average of 0 numbers is Undefined";
	}

}


_1054::~_1054()
{
}
