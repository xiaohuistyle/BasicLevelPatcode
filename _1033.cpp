#include "pch.h"
#include "_1033.h"
//�ɼ����ϻ��˼���������������һ�����ֵ�ʱ�򣬶�Ӧ���ַ��Ͳ�����֡�
//���ڸ���Ӧ�������һ�����֡��Լ���������Щ��������Ľ�����ֻ���������
//�����ʽ��
//������ 2 ���зֱ������������Щ�����Լ�Ӧ����������֡����ж�ӦӢ����ĸ�Ļ����Դ�д������ÿ�������ǲ����� 10^5
//���ַ��Ĵ������õ��ַ�������ĸ[a - z, A - Z]������ 0 - 9���Լ��»��� _������ո񣩡�, ��.�� - �� + �������ϵ���������Ŀ��֤�� 2 ����������ִ��ǿա�
//
//ע�⣺����ϵ��������ˣ���ô��д��Ӣ����ĸ�޷��������
//�����ʽ��
//
//��һ��������ܹ�������Ľ�����֡����û��һ���ַ��ܱ��������������С�

//����������
//
//7 + IE.
//7_This_is_a_test.
//
//���������
//
//_hs_s_a_tst

/*
������
��һ���ϵ��������ˣ���д��Ӣ����ĸ���ܱ�����������ַ�Ϊ��дת����СдҲ���� �� T
�ڶ������ݵ�һ�и�����Ӣ�ģ���Ϊ�ǻ����ģ��ڶ������۸�����Сд����������� �� ie����IE
�������ڷ�Χ�����
*/


_1033::_1033()
{

	string OneInput, twoInput;
	cin >> OneInput >> twoInput;
	for (int i = 0; i < OneInput.length(); i++)
	{
		//�ȶ��ϵ������޸�
		if (OneInput[i]=='+')
		{
			for (int j = 0; j < twoInput.length(); j++)
			{
				///����Ǵ�д��ĸ���Ҿ������ƿ�
				if (twoInput[j] >= 'A' && twoInput[j] <= 'Z')
				{
					twoInput[j] = ' ';
				}
			}
		}
		else
		{
			//��дתСд
			for (int j = 0; j < twoInput.length(); j++)
			{
				//�������ֱ����� ��ֱ�Ӹ����ֵ
				if (OneInput[i] == twoInput[j]) //��Ҫ��Է���
				{
					twoInput[j] = ' ';
				}
				//����Ǵ�д ���� Сд ����Ҫ�� 1.��д��Ӧ�� ��д��Сд 2.Сд��Ӧ�Ĵ�д��Сд�������ֵ
				//��һ�����
				if (OneInput[i]>='A' && OneInput[i]<='Z')
				{
					//�����д���ڴ�д
					if (OneInput[i]==twoInput[j])
					{
						twoInput[j] = ' ';
					}
					else if (OneInput[i]-'A' == twoInput[j]- 'a')//�����д���ڶ�Ӧ��Сд
					{
						twoInput[j] = ' ';
					}
				}
				else if(OneInput[i] >= 'a' && OneInput[i] <= 'z')
				{
					//���Сд����Сд
					if (OneInput[i] == twoInput[j])
					{
						twoInput[j] = ' ';
					}
					else if (OneInput[i]- 'A' == twoInput[j] - 'a' )//���Сд���ڶ�Ӧ�Ĵ�д
					{
						twoInput[j] = ' ';
					}
				}
			}
		}
		
	}
	for (int i = 0; i < twoInput.length(); i++)
	{
		if (twoInput[i]!=' ')
		{
			cout << twoInput[i];
		}
	}

}


_1033::~_1033()
{
}
//�ύ����� һ����δ��
//#include<iostream>
//#include<string>
//#include<malloc.h>//�����Զ��Ŀռ�
//#include <algorithm>//һЩ���õ��㷨
//#include<vector> //��ʾ����
//#include <iomanip>//����cout���������
//using namespace std;
//int main() {
//
//	string OneInput, twoInput;
//	cin >> OneInput >> twoInput;
//	for (int i = 0; i < OneInput.length(); i++)
//	{
//		//�ȶ��ϵ������޸�
//		if (OneInput[i] == '+')
//		{
//			for (int j = 0; j < twoInput.length(); j++)
//			{
//				///����Ǵ�д��ĸ���Ҿ������ƿ�
//				if (twoInput[j] >= 'A' && twoInput[j] <= 'Z')
//				{
//					twoInput[j] = ' ';
//				}
//			}
//		}
//		else
//		{
//			//��дתСд
//			for (int j = 0; j < twoInput.length(); j++)
//			{
//				//�������ֱ����� ��ֱ�Ӹ����ֵ
//				if (OneInput[i] == twoInput[j]) //��Ҫ��Է���
//				{
//					twoInput[j] = ' ';
//				}
//				//����Ǵ�д ���� Сд ����Ҫ�� 1.��д��Ӧ�� ��д��Сд 2.Сд��Ӧ�Ĵ�д��Сд�������ֵ
//				//��һ�����
//				if (OneInput[i] >= 'A' && OneInput[i] <= 'Z')
//				{
//					//�����д���ڴ�д
//					if (OneInput[i] == twoInput[j])
//					{
//						twoInput[j] = ' ';
//					}
//					else if (OneInput[i] - 'A' == twoInput[j] - 'a')//�����д���ڶ�Ӧ��Сд
//					{
//						twoInput[j] = ' ';
//					}
//				}
//				else if (OneInput[i] >= 'a' && OneInput[i] <= 'z')
//				{
//					//���Сд����Сд
//					if (OneInput[i] == twoInput[j])
//					{
//						twoInput[j] = ' ';
//					}
//					else if (OneInput[i] - 'A' == twoInput[j] - 'a')//���Сд���ڶ�Ӧ�Ĵ�д
//					{
//						twoInput[j] = ' ';
//					}
//				}
//			}
//		}
//
//	}
//	for (int i = 0; i < twoInput.length(); i++)
//	{
//		if (twoInput[i] != ' ')
//		{
//			cout << twoInput[i];
//		}
//	}
//
//
//
//	return 0;
//}