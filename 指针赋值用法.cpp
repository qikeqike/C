/*

2020年12月20日11:41:35

*/
#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main(void)
{
	int val = 12345;
	int *ptrVal = &val;
	printf("val = %d\n", val);
	printf("&val = %#x\n", &val);  //b变量的地址
	printf("\n");
	printf("ptrVal = %#x\n", ptrVal);    //指针变量的赋值，，，，，赋值是一个地址，地一十六进制存储
	printf("ptrVal = %#x\n", &ptrVal);    //常量的地址同十六进制存储
	printf("*ptrVal = %d\n", *ptrVal);    //*ptrVal  表示指针变量指向的变量//     指针变量存储的地址（ &val）的变量。。
	return 0;
}
