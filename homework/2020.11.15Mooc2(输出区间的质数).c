#include<stdio.h>
int prime(int k);
int main(){
	int i,j;
	int cont=0;;
	for(i=100;i<=999;i++){
		j=prime(i);
		if(j==0){
			printf("%-4d",i);
			cont++;
			if(cont==8){
				printf("\n");
				cont=0;
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
