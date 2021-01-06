#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
void f();
int m = 10;                   //全局变量
void f()
{

	int m = 100;            //  /局部变量
	printf("%d\n", m);             //f(函数同时定义了m两次     但  局部变量会屏蔽全局变量
}


int main(void)
{
	f();
	return 0;
}


/*
2020年12月17日17:14:57
*/