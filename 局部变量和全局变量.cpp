#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
void f();
int m = 10;                   //ȫ�ֱ���
void f()
{

	int m = 100;            //  /�ֲ�����
	printf("%d\n", m);             //f(����ͬʱ������m����     ��  �ֲ�����������ȫ�ֱ���
}


int main(void)
{
	f();
	return 0;
}


/*
2020��12��17��17:14:57
*/