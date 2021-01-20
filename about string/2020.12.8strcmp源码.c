#include<stdio.h>
int strcmp(const char *a,const char *b){
	int i=0;
	while(a[i]&&b[i]){
		if(a[i]!=b[i]){
			break;
		} 
		i++;
	}
	if(a[i]>b[i]){
		return 1;
	}
	if(a[i]<b[i]){
		return -1;
	}
	else return 0;
}
int main(){
	char a[21]="Hello!world";
 	char b[9]="computer";
 	printf("%d",strcmp(a,b)); 
} 
