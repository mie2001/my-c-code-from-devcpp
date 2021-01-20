/*输入abc的值求一元二次方程的解*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,x1,x2,derta;
	printf("请输入系数a b c的值\n");
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
		printf("该方程无解");
	}
	if("derta=0")
	{
		printf("x1=x2=%lf",x1);
		
	}
	return 0;
	
 } 
