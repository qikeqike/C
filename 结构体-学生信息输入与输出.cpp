#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
void OutputStudent(struct student * st);
void InputStudent(struct student * m);    //ǰ���������Բ�д�β�
struct student                            //ѧ���ṹ��
{
	int age;
	int soccer;
	char name[1000];              // �ṹ���С108�ֽ�
};
int main(void)
{
	int len;          //ѧ������
	InputStudent(&a);            //�Խṹ������
	//OutputStudent(a);            //�Խṹ�����  ���͵�ַ ������Ҫһ��ͬ����С�Ŀռ�洢
	OutputStudent(&a);                 //f���͵�ַ����ʡ�ռ� ��������죬���ǿɸ���ֵ������const��ɳ�����
	return 0;
}
void OutputStudent(struct student * st)
{
	printf("%d %d %s\n", st->soccer, st->age, st->name);                  //��8 st��.age���ָ�ʽҲ���ԣ�
}
void InputStudent(struct student * m)
{
	(*m).age = 10;      //1  1 2 l���ַ�����һ����
	m->soccer = 600;     //2   
	strcpy(m->name, "����");      ///�ַ��������ʽ
}