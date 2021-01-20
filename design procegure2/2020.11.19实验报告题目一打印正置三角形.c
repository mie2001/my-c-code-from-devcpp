#include<stdio.h>
void DrawTriangle (int n,char c){
    int i,j,k;
	for(i=1;i<=n;i++){
	for(k=n-i;k>0;k--){
	printf(" ");
	}
	for(j=2*i-1;j>=1;j--){
	printf("%c",c);
	}
	printf("\n");
	}
}
int main(){
	int n;
	char b;
	printf("请输入一个正整数\n");
	scanf("%d",&n);
	printf("请输入一个三角形所用的形状\n");
	scanf("%c",&b); 
	DrawTriangle (n,b);//函数调用不用加数据类型 
	return 0;
}

