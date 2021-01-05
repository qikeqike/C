/*
2020年12月3日20点34分
二进制用不同进制输出格式

十六进制用 %#X 表示更好

*/
# include  <stdio.h>
int main ()
{
	int x = 47;

	printf("%x\n", x);
	printf("%X\n", x);
	printf("%#X\n", x);
	printf("%#x\n", x);
	printf("%d\n", x);   //十进制输出
	printf("%o\n", x);   //八进制输出

	return 0;
}
/*
输出结果
2f
2F
0X2F
0x2f
47
57
*/