#include<stdio.h>
//�������ж��Ƿ�Ϊ���� 
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
//����������Լ���ӡ 
void breakandprint(){
	int x;
	int i;
	int y;
	int a;
	int b;
	int cont=0;
    for(x=4;x<=2000;x+=2){//ע�������x=x+2 
	for(i=2;i<=x;i++){
		a=prime(i);
		if(a==0){
		y=x-i;
		b=prime(y);
		if(b==0){
			printf("%4d=%4d+%4d",x,i,y);
			cont++;
			if(cont%4==0){
				printf("\n");
				break;
			}
			printf(" ");
			break;
		}	
		}
	}
}
} 
int main(){
	breakandprint();
	return 0;
}
