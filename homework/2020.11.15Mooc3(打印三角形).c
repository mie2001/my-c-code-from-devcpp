#include<stdio.h>
int main(){
	int i,j,k;
	for(i=5;i>=1;i--){
	for(k=5-i;k>0;k--){
	printf(" ");
	}
	for(j=2*i-1;j>=1;j--){
	printf("*");
	}
	printf("\n");
	}
}
