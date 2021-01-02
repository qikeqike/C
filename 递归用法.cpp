#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void ret(int a)
{
	if (a > 9)
	{
		ret(a / 10);
	}
	printf(" %d",a%10);
}
int main(void)
{

	int num;
	scanf("%d", &num); 
	ret(num);
	return 0;
}
/*
2020年12月29日19:58:38
递归套用
*/