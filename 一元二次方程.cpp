/*
    2020��12��3��19��54��
	һԪ���η���
	ע���ʽ
	�����ȸ���float�ᶪʧҪ��˫����double

*/


# include<stdio.h>
# include<math.h>
int main(void)
{
	int a;
	int b;
	int c;
	double delta;
	double x1, x2;
	scanf_s("%d %d %d", &a, &b, &c);

	delta = b*b - 4 * a*c;

	

	if (delta > 0)

	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("�÷����������⣬x1=%f,x2=%f\n",x1,x2);

	}
	else if (delta == 0)
	{
		x1 = (-b) / (2 * a);
		x2 = x1;
		printf("�÷�����һ���⣬x1=x2=%f\n", x1);
	}
	else  
	{

		printf("�޽�");


	}

	return 0;
}