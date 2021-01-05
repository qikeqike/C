#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int  ret(char* arr)
{
	if (*arr != '\0')
	{
		return (1 + ret(arr + 1));
	}
	else
		return 0;
}
int main(void)
{
	char arr[] = "chentaoshiwodeerzi";
	int s = ret(arr);
	printf("%d\n", s);
	return 0;
}