//��1-2+3-4+....n��֮һ�ĺ�
#include<stdio.h>
int main()
{
	int i;
	int n;
	double sum;
	int sign=1;//sign������������ŵ���˼
	scanf("%d",&n);//&��scanf����Ҫ���� 
	for(i=1;i<=n;i++)
	{
	sum+=sign*1.0/i;
	sign=-1*sign; 
	 }
	 printf("f(%d)=%f",n,sum);//%f��double���������ʱ�ķ��ţ���������%lf 
	 return 0; 
 } 
 
