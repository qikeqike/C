/*
 
2020��12��6��14��59�֣�
*/



#include<stdio.h>
int main(void)
{
	int a ;
	int b ;
	int c ;
	int x;
	printf("������3������\n");
	scanf_s("%d,%d,%d", &a,&b,&c);
    
	if (a < b)
	{
		x = a;
		a = b;
		b = x;

	}

	if (a < c)
	{
		x = a;
		a = c;
		c = x;


	}

	if (b < c)
	{
		x = b;
		b = c;
		c = x;


	}

	printf("%d %d %d", a,b,c);

	return 0;
}