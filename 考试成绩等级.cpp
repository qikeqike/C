/*
    2020��12��5��23��00��
	scanf_s��Ҫд����
	���ͣ�����������



*/




# include<stdio.h>
int main()
{
	float  a;
	printf("������ĳɼ�:\n");
	scanf_s("%f", &a);

	if (a >= 100)
		printf("ţ��\n");

	else if (a >= 90 && a < 100)
		printf("��ʦ\n");

	else if (a >= 70 && a < 90)
		printf("����\n");
	else if (a >= 60 && a < 70)
		printf("С�ϵ�\n");
	else if (a >= 0 && a < 60)
		printf("���⡣��������\n");
	else 
		printf("����ɣ�����ɣ��Ͻ�remark\n");
	return 0;
}