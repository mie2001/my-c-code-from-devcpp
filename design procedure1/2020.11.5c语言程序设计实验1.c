#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入两个整数：\n");
	scanf("%d%d",&a,&b);
	printf("%d加%d=%d\n",a,b,a+b);
	printf("%d减%d=%d\n",a,b,a-b);
	printf("%d乘以%d=%d\n",a,b,a*b);
	printf("%d除以%d=%d\n",a,b,a/b);
	printf("%d和%d的平均数=%d\n",a,b,(a+b)/2) ;
	double c,d;
	c=a;
	d=b;
	printf("%f除以%f=%f\n",c,d,c/d);
	printf("%f和%f的平均数=%f\n",c,d,(c+d)/2);
	return 0;
}
