/*

   scanf （旧版本语法）的用法
   用户给 i 变量赋值， 然后系统通过 &i 输入到电脑，再通过不同的输出形式反馈给用户。
   scanf_s 是新版语法


*/
#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main()
{
	int i;
	int j;
	int k;
// scanf_s("m%d",&i)； //m是 非输入控制符   //用户必须将隐藏的非输入控制符输入才能得到正常的输出
    scanf("%d %d %d", &i,&j,&k);    //&是地址符    //系统通过 &i 找到 i 在内存条储存地址
	printf(" 十进制，i = %d\n 十进制 j = %d\n 十进制 k = %d\n", i,j,k);

	return 0;
}