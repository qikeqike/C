/*
   2020年12月7日23点13分




*/



# include<stdio.h>
int main(void)
{
	int i;
	int sum = 0;
	int a = 0;
	int c = 0;
	double  b;
	

	for (i = 0; i <= 100;++i)
	{
		if(i % 2 != 0)

		{
			++a;
		sum +=i;
		}

	   if (i % 2 == 0)

		{
			c+=i ;
		}

	}

	b =1.0* sum / a;
	printf(" sum=%d\n 奇数的个数=%d\n 奇数和平均值=%f\n 偶数和为=%d\n", sum,a,b,c);
	

	return 0;
}