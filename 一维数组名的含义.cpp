#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main(void)
{
	int a[50];
	printf("%#X\n%#X\n", a, &a[0]);//a是一个指针常量存储的是数组a[0]的地址。


	return 0;
}
//2020年12月20日12:52:32