//�ַ�������ĳ��ú���Դ��֮��strlen �ַ������ȵĻ�ȡ
#include<stdio.h>
int strlen(const char *a)
{
	int i=0;
	while(a[i]) 
	{
		i++;
	}
	return i;
}
int main()
{
	char a[12]="Hello!world";
	printf("%d",strlen(a));
 } 
