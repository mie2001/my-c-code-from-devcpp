//如果需要计算的项数并不是常量1000而是变量n
#include<stdio.h>
int main()
{
//2.0版本 
 double sum,i;
 double a=1,b=2,sign=1,c,n;
 printf("请输入一个正整数的值：\n");
 scanf("%lf",&n);
 for(i=1;i<=n;i++){
 	sum+=b/a*sign;
 	c=a+b;
 	a=b;
 	b=c;
 	sign*=-1;
 }
 printf("%f\n",sum);
 return 0;
}
