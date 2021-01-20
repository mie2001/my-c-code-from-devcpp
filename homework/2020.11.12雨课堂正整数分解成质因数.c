#include<stdio.h>
int prime(int);;//一定记住声明函数时要加; 
int main(){
	int i,a;
	printf("请输入一个正整数\n");
	int n;
	scanf("%d",&n);
	printf("%d=",n);
	for(i=2;i<=n;i++){
		a=prime(i);
		if(n==i){
		printf("%d\n",i);
		break;
		}
		if(a==0){
			while(n%i==0){
				n=n/i;
				printf("%d*",i);
				if(n==i){
			    printf("%d",i);
			    break;}	
			}
		}
	
	}
} 
int prime(int k){
	int i,flag=0;
	for(i=2;i<=k/2;i++){
		if(k%i==0){
			flag=1;
			break;
		}
	}
	return flag;
}
