/*
    2020年12月3日19点54分
	一元二次方程
	注意格式
	单精度浮点float会丢失要用双精度double

*/


# include<stdio.h>
# include<math.h>
int main(void)
{
	int a;
	int b;
	int c;
	double delta;
	double x1, x2;
	scanf_s("%d %d %d", &a, &b, &c);

	delta = b*b - 4 * a*c;

	

	if (delta > 0)

	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("该方程有两个解，x1=%f,x2=%f\n",x1,x2);

	}
	else if (delta == 0)
	{
		x1 = (-b) / (2 * a);
		x2 = x1;
		printf("该方程有一个解，x1=x2=%f\n", x1);
	}
	else  
	{

		printf("无解");


	}

	return 0;
}