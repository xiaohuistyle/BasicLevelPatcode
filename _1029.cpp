#include "pch.h"
#include "_1029.h"


_1029::_1029()
{
	string goodString, badString;
	cin >> goodString >> badString;
	for (int i = 0; i < goodString.length(); i++)
	{
		for (int j = 0; j < badString.length(); j++)
		{

			
			if (goodString[i] == badString[j])
			{
				goodString[i] = '0';
				break;
			}
		}
	}
	///����ȥ��
	string outString;
	char stmp;
	for (int i = 0; i < goodString.length(); i++)
	{
		stmp = goodString[i];
		outString+= stmp;
		//�޸ĺ����������ͬ���ַ� ��֤�����ַ��ټ��벻������ַ�����
		for (int j = 0; j < goodString.length(); j++)
		{
			if (stmp==goodString[j] || (int)stmp==goodString[j]-32 || (int)stmp==goodString[j]+32 )
			{
				goodString[j] = '0';
				
			}
		}
	}


	for (int i = 0; i < outString.length(); i++)
	{
		if (outString[i]- '0' != 0)
		{
			///��Сд��ĸ֮���ascII��32 Сд��ĸ��Χ��97-122 ��д��ĸ��Χ��65-90
			if (outString[i]>= 'a' && outString[i]  <= 'z')
			{
				cout << (char)(outString[i] + ('A' - 'a'));
			}
			else
			{
				cout << outString[i];
			}
			
		}
	}

}


_1029::~_1029()
{
}
