//strcat 将两个字符串连接的源码 
#include<stdio.h>
char *strcat(char *a,char *b){
 	int i=0;
 	int j=0;
 	while(a[i])
 	i++;
 	while(b[j])
 	{
 		a[i]=b[j];
 		i++;
 		j++;
	 }
	 return a;
	
}
int main(){
	char a[21]="Hello!world";
 	char b[9]="computer";
 	strcat(a,b);
 	puts(a);
} 
