#include<stdio.h>
int main()
{
	int year ,month,day;
	printf("���ñ�׼��ʽ����һ�����ڣ�YYYY-MM-DD��:");
	scanf("%d-%d-%d",&year,&month,&day);
	printf("�й����ڸ�ʽ��%d��%d��%d��\n",year,month,day);
	printf("�������ڸ�ʽ��%d/%d/%d\n",month,day,year);
	printf("Ӣ�����ڸ�ʽ��%d/%d/%d\n",day,month,year);
	return 0;
}
