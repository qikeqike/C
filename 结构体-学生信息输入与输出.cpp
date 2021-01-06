#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
void OutputStudent(struct student * st);
void InputStudent(struct student * m);    //前置声明可以不写形参
struct student                            //学生结构体
{
	int age;
	int soccer;
	char name[1000];              // 结构体大小108字节
};
int main(void)
{
	int len;          //学生人数
	InputStudent(&a);            //对结构体输入
	//OutputStudent(a);            //对结构体输出  发送地址 接收需要一个同样大小的空间存储
	OutputStudent(&a);                 //f发送地址；节省空间 传输熟读快，但是可更改值。可用const变成常变量
	return 0;
}
void OutputStudent(struct student * st)
{
	printf("%d %d %s\n", st->soccer, st->age, st->name);                  //（8 st）.age这种格式也可以，
}
void InputStudent(struct student * m)
{
	(*m).age = 10;      //1  1 2 l两种方法都一样。
	m->soccer = 600;     //2   
	strcpy(m->name, "陈涛");      ///字符串输入格式
}