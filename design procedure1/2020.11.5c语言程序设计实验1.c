#include<stdio.h>
int main()
{
	int a,b;
	printf("����������������\n");
	scanf("%d%d",&a,&b);
	printf("%d��%d=%d\n",a,b,a+b);
	printf("%d��%d=%d\n",a,b,a-b);
	printf("%d����%d=%d\n",a,b,a*b);
	printf("%d����%d=%d\n",a,b,a/b);
	printf("%d��%d��ƽ����=%d\n",a,b,(a+b)/2) ;
	double c,d;
	c=a;
	d=b;
	printf("%f����%f=%f\n",c,d,c/d);
	printf("%f��%f��ƽ����=%f\n",c,d,(c+d)/2);
	return 0;
}
