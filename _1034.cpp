#include "pch.h"
#include "_1034.h"
//输入格式：
//
//输入在一行中按照 a1 / b1 a2 / b2 的格式给出两个分数形式的有理数，
//其中分子和分母全是整型范围内的整数，负号只可能出现在分子前，分母不为 0。
//输出格式：
//
//分别在 4 行中按照 有理数1 运算符 有理数2 = 结果 的格式顺序输出 2 个有理数的和、差、积、商。
//注意输出的每个有理数必须是该有理数的最简形式 k a / b，其中 k 是整数部分，a / b 是最简分数部分；
//若为负数，则须加括号；若除法分母为 0，则输出 Inf。题目保证正确的输出中没有超过整型范围的整数。

//输入样例 1：
//
//2 / 3 - 4 / 2
//输出样例 1：
//
//2 / 3 + (-2) = (-1 1 / 3)
//2 / 3 - (-2) = 2 2 / 3
//2 / 3 * (-2) = (-1 1 / 3)
//2 / 3 / (-2) = (-1 / 3)

//输入样例 2：
//
//5 / 3 0 / 6
//输出样例 2：
//
//1 2 / 3 + 0 = 1 2 / 3
//1 2 / 3 - 0 = 1 2 / 3
//1 2 / 3 * 0 = 0
//1 2 / 3 / 0 = Inf

/*
分析
输入部分：按顺序输入并提取出关键数字，分别赋值分子分母

输出部分：规定三个整数， first second result
*/
/*
.c_str():  返回一个指向正规C字符串的指针, 内容与本string串相同
atoi(表示 ascii to integer)是把字符串转换成整型数的一个函数
*/
_1034::_1034()
{
	string inputString;
	cin >> inputString;
	//先提取分母
	bool flag = false;
	int firstPlace , secondPlace, symbolPlace;
	//这三个变量主要用于确定三个重要的位置，以便提取关键数字
	for (int i = 0; i < inputString.length(); i++)
	{
		if (inputString[i]=='/')
		{
			//如果flag没被变过，则是第一个有理数的位置
			if (!flag)
			{
				firstPlace = i;
				flag = true;
			}
			if (flag)
			{
				secondPlace = i;
			}
		}
		else if(inputString[i] == '-')
		{
			symbolPlace = i;
		}
	}
	
	
	//位置有了 先处理第一个有理数的分子和分母
	//第一个
	int firstNumertor = atoi(inputString.substr(0, firstPlace).c_str());
	int firstDenominator = atoi(inputString.substr(firstPlace,symbolPlace).c_str());
	//第二个
	int secondNumertor = atoi(inputString.substr(symbolPlace, secondPlace).c_str());
	int secondDenominator = atoi(inputString.substr(secondPlace,inputString.length()).c_str());
	//引入松弛变量
	int  K1, K2, K3;
	//对结果进行计算 分为四类 加 减 乘除 
	//分子分母相加即为新分子 两个分母相乘为新分子
	int addResultNumertor = firstNumertor * secondDenominator + secondNumertor * firstDenominator;
	int	addresultDenominator = secondNumertor * firstDenominator;
	if (addResultNumertor % addresultDenominator > 0)
	{
		K1 = addResultNumertor / addresultDenominator;
		if (addResultNumertor > addresultDenominator)
		{
			addResultNumertor = addResultNumertor - K1 * addresultDenominator;
		}
	}	


	//对于减法同理
	int substructionResultNumertor = firstNumertor * secondDenominator - secondNumertor * firstDenominator;
	int	substructionResultDenominator = secondNumertor * firstDenominator;
	if (substructionResultNumertor % substructionResultDenominator > 0)
	{
		K1 = substructionResultNumertor / substructionResultDenominator;
		if (substructionResultNumertor > substructionResultDenominator)
		{
			substructionResultNumertor = substructionResultNumertor - K1 * substructionResultDenominator;
		}
	}

	// 乘法

	int multiplicationResultNumertor = firstNumertor * secondNumertor ;
	int	multiplicationResultDenominator = secondDenominator * firstDenominator;
	if (multiplicationResultNumertor % multiplicationResultDenominator > 0)
	{
		K1 = multiplicationResultNumertor / multiplicationResultDenominator;
		if (multiplicationResultNumertor > multiplicationResultDenominator)
		{
			multiplicationResultNumertor = multiplicationResultNumertor - K1 * multiplicationResultDenominator;
		}
	}


	//除法
	
	int divisionResultNumertor = firstNumertor * secondDenominator;
	int	divisionResultDenominator = firstDenominator * secondNumertor;
	if (divisionResultNumertor % divisionResultDenominator > 0)
	{
		K1 = divisionResultNumertor / divisionResultDenominator;
		if (divisionResultNumertor > divisionResultDenominator)
		{
			divisionResultNumertor = divisionResultNumertor - K1 * divisionResultDenominator;
		}
	}
	//有理数的计算之所以在后面，是因为，避免改变相对应的值
	//当分子 大于 分母时候需要拆分化简 否则直接输出即可 ，在此过程中赋予新值
	if (firstNumertor % firstDenominator > 0)
	{
		K1 = firstNumertor / firstDenominator;
		if (firstNumertor>firstDenominator)
		{
			firstNumertor = firstNumertor - K1 * firstDenominator;
		}
	}
	if (secondNumertor % secondDenominator != 0)
	{
		K2 = secondNumertor / firstDenominator;
		if (secondNumertor > firstDenominator)
		{
			secondNumertor = secondNumertor - K2 * secondDenominator;
		}
	}
	
	cout << firstNumertor << "/" << firstDenominator << " + " << secondNumertor << "/";







}


_1034::~_1034()
{
}
