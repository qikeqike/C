#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int  max(int i,int j)
{
	if (i > j)
		return 1.54;//����ֵ����Ϊ int������ֻ�᷵��1��
	else
		return 0;// return��ֹ��������һ��0
}

void ok(void)
{
	printf("ok\n");
}

void no(void)
{
	printf("no\n");
}

int main()
{
	int a, b, c, d, e, f;
	a = 70, b = 65, c = 58, d = 94, e = 0, f = 6;
	max(a, b);
	{
		if (max(a, b))
			ok();

		else
			no();
	}
	max(c, d);
	{
		if (max(c, d))
			ok();

		else
			no();
	}
	max(e,f);
	{
		if (max(e, f))
			ok();

		else
			no();
	}


	return 0;
}