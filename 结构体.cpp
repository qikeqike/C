#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//第二种
/*struct
{
int  a;
char s;
float h;
double j;
}man1;
//第三种
struct man
{
int  a;
char s;
float h;
double j;
}man3;*/
//第一种
struct man
{
	int  a;
	char s;
	float h;
    double j;
};

int main(void)
{
	struct man m = { 5,'j', 416.54, 0.006 };      //第一种定义方法
	struct man s1;
	//s = { 5, 'j', 416.54, 0.006 };           error:和数组一样不能直接一起赋值；
	s1.a = 5;                                                                                 //后面4排是第一种取出结构体里变量的方式
	s1.s = 'g';                        //必须像这样一个一个定义
	s1.h = 200.2F;               //浮点数默认是double储存，如果用float类型后面加   F  ;
	s1.j = 0.002;                                                                                             //

	struct man * k = &m;           //将结构体m变量地址储存
	k->a = 6;        // 这表示：k所指向的结构体中a成员                //这是第二种方式          k->a系统会转化成（* k）.a   (* k)里存储的是结构体地址  （* k）.a刚好就指向a

	return 0;
}

//结构体把基本数据整合成一个新的复合数据类型
//建议使用第一种表示方法