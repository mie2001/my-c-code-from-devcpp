//ͳ�Ƶ��ʳ��ִ��� 
#include<stdio.h>
#include<string.h>
int search(char *a,char *b){
     int i=0;
     int j;
     int k;
     char c[20];//�������δ���a�е�ÿһ������ 
     int cont=0;//ͳ�Ƶ��ʴ��� 
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
	printf("������һ��Ӣ�ģ�\n");
	char a[200];
	gets(a);
	printf("����������Ҫ���ҵĵ��ʣ�\n");
	char b[20];
	gets(b);
	printf("�õ��ʳ��ֵĴ���Ϊ:\n%d", search(a,b));

} 
