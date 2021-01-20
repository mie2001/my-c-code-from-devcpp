 #include<stdio.h>
int main()
{
	int a,b,x,i,n;
	int cont=1;
	int prime=1;
	printf("请输入一个正整数范围(10~1000)：\n");
	scanf("%d %d",&a,&b); 
	printf("请输入一个正整数:\n");
	scanf("%d",&x);
	for(i=a;i<=b;i++){
		for(n=2;n<i;n++){
			if(x%n==0){
				prime=0;
			}
			if(i%n==0){
				break;}
			if(n==i-1){
				printf("%-4d",i);
				cont++;
				if(cont==6){
					printf("\n");
					cont=0;
				}
			}
			}
		}
		if(prime=0){
				printf("\n%d不是质数",x);}
				else{
					printf("\n%d是质数",x);
				}	
 } 
