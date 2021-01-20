#include<stdio.h>
int prime(int n);//判断x减去x以内的质数的数是否是质数 
int main()
{
    int x,y;    
    do{
	printf("请输入一个小于2000的且大于2的正偶数\n");
	scanf("%d",&x);}while(x%2!=0);
	int i,a,b;
	for(i=2;i<=x;i++){
		a=prime(i);
		if(a==0){
		y=x-i;
		b=prime(y);
		if(b==0){
			printf("%d=%d+%d\n",x,y,i);
			printf("哥德巴赫猜想得以证明\n");
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
