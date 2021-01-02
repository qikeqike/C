#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
int main(void)
{
	int a[10] = { 0 };
	printf("%p\n", &a[0]);
	printf("%p\n", &a[9]);
	int s = &a[9] - &a[0];
	printf("%d\n", s);


	return 0;
}/*
 003AF710
003AF734
9
请按任意键继续. . .


*/