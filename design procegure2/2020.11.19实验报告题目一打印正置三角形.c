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
	printf("������һ��������\n");
	scanf("%d",&n);
	printf("������һ�����������õ���״\n");
	scanf("%c",&b); 
	DrawTriangle (n,b);//�������ò��ü��������� 
	return 0;
}

