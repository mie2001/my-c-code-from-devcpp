//�����ʽ1+2+3+....+n ��֮һ�ĺ� 
#include<stdio.h>
int main()
{
	int i;
	int n;
	double sum=0.0;//sum��ʾ��͵���˼
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum+=1.0/i;//1.0
	 } 
	printf("f(%d)=%f\n",n,sum);
    return 0;
}
