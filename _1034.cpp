#include "pch.h"
#include "_1034.h"
//�����ʽ��
//
//������һ���а��� a1 / b1 a2 / b2 �ĸ�ʽ��������������ʽ����������
//���з��Ӻͷ�ĸȫ�����ͷ�Χ�ڵ�����������ֻ���ܳ����ڷ���ǰ����ĸ��Ϊ 0��
//�����ʽ��
//
//�ֱ��� 4 ���а��� ������1 ����� ������2 = ��� �ĸ�ʽ˳����� 2 ���������ĺ͡�������̡�
//ע�������ÿ�������������Ǹ��������������ʽ k a / b������ k ���������֣�a / b �����������֣�
//��Ϊ��������������ţ���������ĸΪ 0������� Inf����Ŀ��֤��ȷ�������û�г������ͷ�Χ��������

//�������� 1��
//
//2 / 3 - 4 / 2
//������� 1��
//
//2 / 3 + (-2) = (-1 1 / 3)
//2 / 3 - (-2) = 2 2 / 3
//2 / 3 * (-2) = (-1 1 / 3)
//2 / 3 / (-2) = (-1 / 3)

//�������� 2��
//
//5 / 3 0 / 6
//������� 2��
//
//1 2 / 3 + 0 = 1 2 / 3
//1 2 / 3 - 0 = 1 2 / 3
//1 2 / 3 * 0 = 0
//1 2 / 3 / 0 = Inf

/*
����
���벿�֣���˳�����벢��ȡ���ؼ����֣��ֱ�ֵ���ӷ�ĸ

������֣��涨���������� first second result
*/
/*
.c_str():  ����һ��ָ������C�ַ�����ָ��, �����뱾string����ͬ
atoi(��ʾ ascii to integer)�ǰ��ַ���ת������������һ������
*/
_1034::_1034()
{
	string inputString;
	cin >> inputString;
	//����ȡ��ĸ
	bool flag = false;
	int firstPlace , secondPlace, symbolPlace;
	//������������Ҫ����ȷ��������Ҫ��λ�ã��Ա���ȡ�ؼ�����
	for (int i = 0; i < inputString.length(); i++)
	{
		if (inputString[i]=='/')
		{
			//���flagû����������ǵ�һ����������λ��
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
	
	
	//λ������ �ȴ����һ���������ķ��Ӻͷ�ĸ
	//��һ��
	int firstNumertor = atoi(inputString.substr(0, firstPlace).c_str());
	int firstDenominator = atoi(inputString.substr(firstPlace,symbolPlace).c_str());
	//�ڶ���
	int secondNumertor = atoi(inputString.substr(symbolPlace, secondPlace).c_str());
	int secondDenominator = atoi(inputString.substr(secondPlace,inputString.length()).c_str());
	//�����ɳڱ���
	int  K1, K2, K3;
	//�Խ�����м��� ��Ϊ���� �� �� �˳� 
	//���ӷ�ĸ��Ӽ�Ϊ�·��� ������ĸ���Ϊ�·���
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


	//���ڼ���ͬ��
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

	// �˷�

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


	//����
	
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
	//�������ļ���֮�����ں��棬����Ϊ������ı����Ӧ��ֵ
	//������ ���� ��ĸʱ����Ҫ��ֻ��� ����ֱ��������� ���ڴ˹����и�����ֵ
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
