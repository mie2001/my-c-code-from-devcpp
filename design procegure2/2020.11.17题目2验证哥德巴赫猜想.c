#include<stdio.h>
int prime(int n);//�ж�x��ȥx���ڵ����������Ƿ������� 
int main()
{
    int x,y;    
    do{
	printf("������һ��С��2000���Ҵ���2����ż��\n");
	scanf("%d",&x);}while(x%2!=0);
	int i,a,b;
	for(i=2;i<=x;i++){
		a=prime(i);
		if(a==0){
		y=x-i;
		b=prime(y);
		if(b==0){
			printf("%d=%d+%d\n",x,y,i);
			printf("��°ͺղ������֤��\n");
			break;
		}	
		}
	}
}
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
