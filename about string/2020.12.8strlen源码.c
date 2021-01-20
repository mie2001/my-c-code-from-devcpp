//字符串处理的常用函数源码之：strlen 字符串长度的获取
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
