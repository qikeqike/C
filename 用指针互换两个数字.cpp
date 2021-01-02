/*
2020Äê12ÔÂ20ÈÕ11:17:13

*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void f(int * p, int * q)
{
	int a;
	a = *p;
	*p = *q;
	*q = a;
	return;
}
int main(void)
{
	int a,b;
	scanf("%d %d", &a, &b);
	f(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}
