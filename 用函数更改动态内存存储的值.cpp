#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
#include<malloc.h>
void f(int * q)
{

	*q = 50;
}
int main(void)
{
	int * p = (int *)malloc(4);
	*p = 5;
	printf("%d\n", *p);
	f(p);
	printf("%d\n", *p);

       


	return 0;
}