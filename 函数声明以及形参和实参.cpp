#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>   //��������⺯���ĺ�������
int d(int b);       //����������һ����䣻
int  s(void);        
int main(void)
{
	int a = 0;
		d(a);									//�βκ�ʵ�α���һһ��Ӧ���໥����					//������� a ��ʵ��			
	printf("%d\n",a);                           //int ���Լ��� float double ���ǲ��ܼ��� chaer
    return 0;
}

int d(int b)
{
	return s();              //s()��������Ϊʵ��
}


int  s(void)                //s()�����������β�
{
 int m =3;
 return m;
}

//2020��12��15��17:01:33