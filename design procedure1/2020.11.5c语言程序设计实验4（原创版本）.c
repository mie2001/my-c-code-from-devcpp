#include<stdio.h>
int main()
{
	int a,b,x,i,n;
	int cont=1;
	int prime=1;
	printf("请输入一个正整数范围：\n");
	scanf("%d %d",&a,&b); 
	printf("请输入一个正整数:\n");
	scanf("%d",&x);
	for(i=a;i<=b;i++){
		for(n=2;n<i;n++){
			if(x%n==0){
				prime=0;
			}
			if(i%n==0){
				printf("%-4d",i);
				cont++;
				if(cont==5){
					printf("\n");
					cont=0;
				}
			break;	
			}
			}
		}
		if(prime=0){
				printf("\n%d不是质数",x);}
				else{
					printf("%d是质数",x);
				}	
 } 
