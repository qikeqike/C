#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>   //里面包含库函数的函数声明
int d(int b);       //函数声明是一个语句；
int  s(void);        
int main(void)
{
	int a = 0;
		d(a);									//形参和实参必须一一对应，相互兼容					//括号里的 a 是实参			
	printf("%d\n",a);                           //int 可以兼容 float double 但是不能兼容 chaer
    return 0;
}

int d(int b)
{
	return s();              //s()括号里面为实参
}


int  s(void)                //s()括号里面是形参
{
 int m =3;
 return m;
}

//2020年12月15日17:01:33