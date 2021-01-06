/*
    2020年12月5日23点00分
	scanf_s不要写错了
	加油！！！！！！



*/




# include<stdio.h>
int main()
{
	float  a;
	printf("输入你的成绩:\n");
	scanf_s("%f", &a);

	if (a >= 100)
		printf("牛逼\n");

	else if (a >= 90 && a < 100)
		printf("带师\n");

	else if (a >= 70 && a < 90)
		printf("带哥\n");
	else if (a >= 60 && a < 70)
		printf("小老弟\n");
	else if (a >= 0 && a < 60)
		printf("啊这。。。。。\n");
	else 
		printf("不会吧，不会吧，赶紧remark\n");
	return 0;
}