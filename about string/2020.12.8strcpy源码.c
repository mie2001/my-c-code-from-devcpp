//字符串处理的常用函数的源码之：strcpy  字符串复制包括原字符的覆盖
#include<stdio.h>
 char *strcpy(char *a,char *b)
 {
  int i=0;
  while(b[i]){
  	a[i]=b[i];
  	i++;
  } 
 }
 int main()
 {
 	char a[12]="Hello!world";
 	char b[9]="computer";
 	strcpy(a,b);
	puts(a);
 }
