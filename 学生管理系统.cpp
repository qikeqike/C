#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
#include<malloc.h>
void f(struct student * f,int * len);
void s(struct student * m, int * len);
struct student 
{
	int age;
	float soccer;
	char name[100];
};
int main(void)
{
	int len=0;
	struct student * pArr;
	pArr = (struct student *) malloc(sizeof(struct student)*len);

	f(pArr,&len);
	s(pArr, &len);
	return 0;
}
void f(struct student * f,int * len)
{
	int i;
	printf("������ѧ������=");
	scanf("%d", &*len);
	for (i = 0; i <*len; ++i)
	{
		printf("�������%d��ѧ������Ϣ\n���� ",i+1);
		scanf("%s", &f[i].name );
		printf("���� ");
		scanf("%d", &f[i].age);
		printf("���� ");
		scanf("%f", &f[i].soccer);
	}
}
void s(struct student * m, int * len)
{
	int i;
	printf("\nѧ����Ϣ:\n");
	for (i = 0; i < *len; ++i)
	{
		printf("��%d��ѧ������Ϣ\n",i+1	);
		printf("������%s\n",m[i].name  );
		printf("���䣺%d\n",m[i].age );
		printf("����: %.2f\n", m[i].soccer );
	}
}

