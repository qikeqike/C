/*
2020年12月11日13点42分

*/




#include<stdio.h>
int main(void)
{
	int val;
	int sum = 0;
	int m;
	char ch;

	printf("输入一个数字判断是否是回文数:");
	scanf_s("%d", &val);


	m = val;
	while (m)
	{
        sum = sum * 10 + m % 10;
		m /= 10;
	}

	if (sum == val)
		printf("是\n");

	else
		printf("不是\n");
    return 0;
}