//求多项式1+2+3+....+n 分之一的和 
#include<stdio.h>
int main()
{
	int i;
	int n;
	double sum=0.0;//sum表示求和的意思
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum+=1.0/i;//1.0
	 } 
	printf("f(%d)=%f\n",n,sum);
    return 0;
}
