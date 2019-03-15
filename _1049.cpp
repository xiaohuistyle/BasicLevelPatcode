#include "pch.h"
#include "_1049.h"
#include<cstdio>

_1049::_1049()
{
	int N;
	cin >> N;
	double *a = (double*)malloc(sizeof(double)*N);
	double sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		sum += (i + 1)*a[i] * (N - i);
	}
	printf("%.2lf", sum);
}


_1049::~_1049()
{
}
