/*
   2020��12��7��23��13��




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
	printf(" sum=%d\n �����ĸ���=%d\n ������ƽ��ֵ=%f\n ż����Ϊ=%d\n", sum,a,b,c);
	

	return 0;
}