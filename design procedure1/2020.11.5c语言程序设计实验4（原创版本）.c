#include<stdio.h>
int main()
{
	int a,b,x,i,n;
	int cont=1;
	int prime=1;
	printf("������һ����������Χ��\n");
	scanf("%d %d",&a,&b); 
	printf("������һ��������:\n");
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
				printf("\n%d��������",x);}
				else{
					printf("%d������",x);
				}	
 } 
