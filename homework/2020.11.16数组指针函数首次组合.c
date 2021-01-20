#include<stdio.h>
#include<math.h> 
#define NUM 15
#define T 5 
void Find(double *p,int n)
{
	int sum=0;
	int i;
	int c;
	int cont=0;
	for(i=0;i<=n;i++){
	sum+=*p+i; 
	c=sum/n;
	for(i=0;i<=n;i++){
	  if(fabs(*p+i-c)>T){
	  	printf("%d",*p);
	  	cont ++;
	  }
	} 
	printf("总共有%d个数字超出了误差范围",cont);
}
int main()
{
	double array[NUM]={23.2,26,34,34,23,12,21.2,12,13,18,19.2,26.3,15.4,16.5,14.3}; 
	Find(array,NUM);
	return 0;
}
