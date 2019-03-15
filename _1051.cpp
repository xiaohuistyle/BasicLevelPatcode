#include "pch.h"
#include "_1051.h"


_1051::_1051()
{
	double R1, P1, R2, P2, a , b;
	cin >> R1 >> P1 >> R2 >> P2;
	a = R1 * R2 * cos(P1 + P2);
	b = R1 * R2 * sin(P1 + P2);
	printf("%.2f%+.2fi",a,b);
}


_1051::~_1051()
{
}
