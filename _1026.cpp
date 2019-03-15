#include "pch.h"
#include "_1026.h"


_1026::_1026()
{
	///其实就是给出一个数字转换为时分秒的问题
	int start, end;
	cin >> start >> end;
	int secondCount;
	int TCK = 100;
	float pointCount, hour, minute, second;
	if (end > start)
	{
		pointCount = end - start;
		secondCount = pointCount / TCK;
		hour = secondCount / 3600;
		minute = secondCount % 3600 / 60;
		second = secondCount % 3600 % 60;
	}
	cout << hour << ':' << minute << ':' << second+1;
	



}


_1026::~_1026()
{
}
