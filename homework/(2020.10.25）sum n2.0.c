//求1-2+3-4+....n分之一的和
#include<stdio.h>
int main()
{
	int i;
	int n;
	double sum;
	int sign=1;//sign代表符号正负号的意思
	scanf("%d",&n);//&是scanf必须要带的 
	for(i=1;i<=n;i++)
	{
	sum+=sign*1.0/i;
	sign=-1*sign; 
	 }
	 printf("f(%d)=%f",n,sum);//%f是double变量在输出时的符号，输入则是%lf 
	 return 0; 
 } 
 
