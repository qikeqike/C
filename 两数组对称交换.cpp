#include <stdio.h>
#include<windows.h>
#include<string.h>
int main(void)
{
	char  a[] = "my son is chen tao£¬this is truth";
	char  b[] = "sssssssssssssssssssssssssssssssss";
	int left = 0;
	int right = (strlen(a)-1);
	while (left <= right)
	{
		b [left] = a[left];
		b[right] = a [right];
		printf("%s\n", b);
		left++;
		right--;
		Sleep(1000);
	}
	return 0;
}