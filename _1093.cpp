#include "pch.h"
#include "_1093.h"


_1093::_1093()
{
	int alphabet[127] = { 0 };
	char c;
	for (int i = 0; i < 2; i++) {          //�����ַ���������ѭ������
		while ((c = getchar()) != '\n') {  //�������Ƿ�Ϊ'\n'���ж��ַ��������Ƿ����
			if (alphabet[c] == 0) {
				alphabet[c] = 1;
				printf("%c", c);
			}
		}
	}


}


_1093::~_1093()
{
}
