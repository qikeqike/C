#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
void Trverseval(int m);     //如果函数没有按运行顺序排序就会找不到函数标识符
bool IsPrime(int i);       //需要在前面给函数声明
                              //函数声明是一个语句要加分号


int main(void)
{
	int value;
	scanf("%d", &value);
	Trverseval(value);
	return 0;
}

void Trverseval(int m)
{
	int i;
	for (i = 2; i <= m; ++i)
	{
		if (IsPrime(i))                         //解释：if (IsPrime(i))为真
			printf("%d\n", i);
	}

}
bool IsPrime(int a)
{
	int  j;                              //形参和实参可以相同互不干涉，但是尽量不要相同以免混淆    不利于以后查看
	for (j = 2; j < a; ++j)
	{
		if (0 == a%j)
			break;
	}
	if (j == a)
		return true;
	else
		return false;
}
/*
2020年12月17日15:56:19

*/