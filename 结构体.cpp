#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//�ڶ���
/*struct
{
int  a;
char s;
float h;
double j;
}man1;
//������
struct man
{
int  a;
char s;
float h;
double j;
}man3;*/
//��һ��
struct man
{
	int  a;
	char s;
	float h;
    double j;
};

int main(void)
{
	struct man m = { 5,'j', 416.54, 0.006 };      //��һ�ֶ��巽��
	struct man s1;
	//s = { 5, 'j', 416.54, 0.006 };           error:������һ������ֱ��һ��ֵ��
	s1.a = 5;                                                                                 //����4���ǵ�һ��ȡ���ṹ��������ķ�ʽ
	s1.s = 'g';                        //����������һ��һ������
	s1.h = 200.2F;               //������Ĭ����double���棬�����float���ͺ����   F  ;
	s1.j = 0.002;                                                                                             //

	struct man * k = &m;           //���ṹ��m������ַ����
	k->a = 6;        // ���ʾ��k��ָ��Ľṹ����a��Ա                //���ǵڶ��ַ�ʽ          k->aϵͳ��ת���ɣ�* k��.a   (* k)��洢���ǽṹ���ַ  ��* k��.a�պþ�ָ��a

	return 0;
}

//�ṹ��ѻ����������ϳ�һ���µĸ�����������
//����ʹ�õ�һ�ֱ�ʾ����