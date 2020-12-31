# include<stdio.h>
int F(int x, int y);

//int F(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//}
//	else
//	{
//
//		return y;
//	}
//
//}

#define F(x,y) (x>y?x:y)

int main(void)
{
	int a = 10;
	int b = 5;
	int s = F(a, b);
	printf("%#X\n", s);

	return 0;
}