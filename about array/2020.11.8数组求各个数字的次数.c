#include<stdio.h>
int main()
{
	int i;
	int x;
	int a[10]={0};//这个地方要注意 
	printf("请输入一个整数\n");
	scanf("%d",&x);
	while(x){
		i=x%10;
		a[i]++;
		x=x/10;//这个地方要注意 
	}
	for(i=0;i<=9;i++){
		printf("%d\t",i);
	}
	printf("\n");
	for(i=0;i<=9;i++){
		printf("%d\t",a[i]);
	}
	return 0;
 } 
