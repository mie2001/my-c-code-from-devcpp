#include<stdio.h>
int main()
{
	int i;
	int x;
	int a[10]={0};//����ط�Ҫע�� 
	printf("������һ������\n");
	scanf("%d",&x);
	while(x){
		i=x%10;
		a[i]++;
		x=x/10;//����ط�Ҫע�� 
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
