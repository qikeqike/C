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
	printf("请输入学生人数=");
	scanf("%d", &*len);
	for (i = 0; i <*len; ++i)
	{
		printf("请输入第%d个学生的信息\n姓名 ",i+1);
		scanf("%s", &f[i].name );
		printf("年龄 ");
		scanf("%d", &f[i].age);
		printf("分数 ");
		scanf("%f", &f[i].soccer);
	}
}
void s(struct student * m, int * len)
{
	int i;
	printf("\n学生信息:\n");
	for (i = 0; i < *len; ++i)
	{
		printf("第%d个学生的信息\n",i+1	);
		printf("姓名：%s\n",m[i].name  );
		printf("年龄：%d\n",m[i].age );
		printf("分数: %.2f\n", m[i].soccer );
	}
}

