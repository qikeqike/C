#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
#include<malloc.h>
int main(void)
{
	int m = 0, i;
	int*p = (int *)malloc(4* m);
	printf("������Ҫ�Ķ�̬�ڴ�; ");
	scanf_s("%d", & m);
	relloc(p, 100);          //���Ӷ�̬�ڴ�������پ��Ƕ��٣����Ǽӷ�
	//printf("%d")
	for (i = 0; i < m ; ++i)
		scanf("%d ", &p[i]);
	
	printf("����ֱ���;\n");
		
	for (i = 0; i <m; ++i)
		printf("%d\n", p[i]);
	 //fee(p);      //�ͷŶ�̬�ڴ�ռ䡮��



	return 0;
}