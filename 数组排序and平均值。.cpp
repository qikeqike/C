
#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
void f(int * a, int m);
void s(int * a, int m);
void f(int * a, int m)
{
	
	int i;
	int b;
	int s;
	for (i = 0; i < m; ++i)
	{
		for (b = i+1; b<m; ++b)
		{
			if (a[i] > a[b])
			{
					s = a[i];
					a[i] = a[b];
					a[b] = s;
			}

		}

	}
	
}
void s(int * a, int m)
{
	int i;
	double ave=0;
	printf("排序:");
	for (i = 0; i < 10; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("最大值=%d\n 最小值=%d\n", a[9], a[0]);
	for (i = 1; i < 9; ++i)
	{
		ave += a[i];
	}
	printf("平均值=%.2lf\n", ave / (m - 2));

}
int main(void)
{

	int a[10] = { 89, 67, 65, 45, 78, 99, 43, 23, 10, 100 };
	int *b = &a[0];
	f(b, 10);
	s(b, 10);
	return 0;
}