/*
2020��12��11��13��42��

*/




#include<stdio.h>
int main(void)
{
	int val;
	int sum = 0;
	int m;
	char ch;

	printf("����һ�������ж��Ƿ��ǻ�����:");
	scanf_s("%d", &val);


	m = val;
	while (m)
	{
        sum = sum * 10 + m % 10;
		m /= 10;
	}

	if (sum == val)
		printf("��\n");

	else
		printf("����\n");
    return 0;
}