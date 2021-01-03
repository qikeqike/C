#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
#include<malloc.h>
int main(void)
{
	int m = 0, i;
	int*p = (int *)malloc(4* m);
	printf("输入需要的动态内存; ");
	scanf_s("%d", & m);
	relloc(p, 100);          //增加动态内存输入多少就是多少，不是加法
	//printf("%d")
	for (i = 0; i < m ; ++i)
		scanf("%d ", &p[i]);
	
	printf("数组分别是;\n");
		
	for (i = 0; i <m; ++i)
		printf("%d\n", p[i]);
	 //fee(p);      //释放动态内存空间‘’



	return 0;
}