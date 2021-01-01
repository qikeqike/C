#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

bool IsPrime ( int m )
{
	int i;
	for (i = 2; i < m; ++i)
	{
		if (m%i == 0)
			break;
	}
	if (m == i)
		return true;
	else
		return false;

}

int main(void)
 {
	int val;
	scanf("%d", &val);
	if (IsPrime(val))
		printf("YES£¡\n");
	else
		printf("NO!\n");

    return 0;
}