



#include<stdio.h>


void s()
{
	char ch;

	while ((ch = getchar()) != '\n')//get��ȡgetchar��ȡ�ַ�����
		continue;
}

int main(void)
{
	int z, x;
	
	
	scanf_s("%d", &x);
	s();
	printf("%d\n%d\n", x);
	s();

	scanf_s("%d", &z);
	s();
	printf("%d\n%d\n",z);

	return 0;
}
