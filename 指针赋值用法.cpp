/*

2020��12��20��11:41:35

*/
#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main(void)
{
	int val = 12345;
	int *ptrVal = &val;
	printf("val = %d\n", val);
	printf("&val = %#x\n", &val);  //b�����ĵ�ַ
	printf("\n");
	printf("ptrVal = %#x\n", ptrVal);    //ָ������ĸ�ֵ������������ֵ��һ����ַ����һʮ�����ƴ洢
	printf("ptrVal = %#x\n", &ptrVal);    //�����ĵ�ַͬʮ�����ƴ洢
	printf("*ptrVal = %d\n", *ptrVal);    //*ptrVal  ��ʾָ�����ָ��ı���//     ָ������洢�ĵ�ַ�� &val���ı�������
	return 0;
}
