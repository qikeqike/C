#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
void Trverseval(int m);     //�������û�а�����˳������ͻ��Ҳ���������ʶ��
bool IsPrime(int i);       //��Ҫ��ǰ�����������
                              //����������һ�����Ҫ�ӷֺ�


int main(void)
{
	int value;
	scanf("%d", &value);
	Trverseval(value);
	return 0;
}

void Trverseval(int m)
{
	int i;
	for (i = 2; i <= m; ++i)
	{
		if (IsPrime(i))                         //���ͣ�if (IsPrime(i))Ϊ��
			printf("%d\n", i);
	}

}
bool IsPrime(int a)
{
	int  j;                              //�βκ�ʵ�ο�����ͬ�������棬���Ǿ�����Ҫ��ͬ�������    �������Ժ�鿴
	for (j = 2; j < a; ++j)
	{
		if (0 == a%j)
			break;
	}
	if (j == a)
		return true;
	else
		return false;
}
/*
2020��12��17��15:56:19

*/