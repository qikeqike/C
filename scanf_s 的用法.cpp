/*

   scanf ���ɰ汾�﷨�����÷�
   �û��� i ������ֵ�� Ȼ��ϵͳͨ�� &i ���뵽���ԣ���ͨ����ͬ�������ʽ�������û���
   scanf_s ���°��﷨


*/
#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main()
{
	int i;
	int j;
	int k;
// scanf_s("m%d",&i)�� //m�� ��������Ʒ�   //�û����뽫���صķ�������Ʒ�������ܵõ����������
    scanf("%d %d %d", &i,&j,&k);    //&�ǵ�ַ��    //ϵͳͨ�� &i �ҵ� i ���ڴ��������ַ
	printf(" ʮ���ƣ�i = %d\n ʮ���� j = %d\n ʮ���� k = %d\n", i,j,k);

	return 0;
}