//统计单词出现次数 
#include<stdio.h>
#include<string.h>
int search(char *a,char *b){
     int i=0;
     int j;
     int k;
     char c[20];//用来依次储存a中的每一个单词 
     int cont=0;//统计单词次数 
     for(;a[i]!='\0';i++){
	 while(a[i]!=32){
	 	c[j]=a[i];
	 	i++;
	 	j++;
	 }
	if(strcmp(c,b)==0){
		cont++;
	}
		for(k=0;c[k]!='\0';k++){
		c[k]='\0'; 
	}
	j=0;
}
    return cont;
}
int main(){
	printf("请输入一段英文：\n");
	char a[200];
	gets(a);
	printf("请输入你想要查找的单词：\n");
	char b[20];
	gets(b);
	printf("该单词出现的次数为:\n%d", search(a,b));

} 
