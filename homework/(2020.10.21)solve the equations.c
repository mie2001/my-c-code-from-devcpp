/*����abc��ֵ��һԪ���η��̵Ľ�*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,x1,x2,derta;
	printf("������ϵ��a b c��ֵ\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	derta=b*b-4*a*c;
	x1=(-b+sqrt(derta))/2*a;
	x2=(-b-sqrt(derta))/2*a;
	if(derta>0)
	{
	    printf("%lf %lf",x1,x2);
	}
	if(derta<0)
	{
		printf("�÷����޽�");
	}
	if("derta=0")
	{
		printf("x1=x2=%lf",x1);
		
	}
	return 0;
	
 } 
