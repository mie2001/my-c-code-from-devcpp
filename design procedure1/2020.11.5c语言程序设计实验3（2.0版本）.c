//�����Ҫ��������������ǳ���1000���Ǳ���n
#include<stdio.h>
int main()
{
//2.0�汾 
 double sum,i;
 double a=1,b=2,sign=1,c,n;
 printf("������һ����������ֵ��\n");
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
