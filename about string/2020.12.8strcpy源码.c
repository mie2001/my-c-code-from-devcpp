//�ַ�������ĳ��ú�����Դ��֮��strcpy  �ַ������ư���ԭ�ַ��ĸ���
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
