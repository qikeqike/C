#include<stdio.h>
int main(void)
{
	int n = 0;
	int i, m;
	int a = 0;
    int sum = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n;i++)
	{
		sum = 1;
		for (m  = 1; m<=i;m++)
		{
			
			sum = sum*m;
		}

		a = a + sum;
	}
	printf("%d\n", a);
	return 0;
}