#include<stdio.h>
int main(){
	int a=1;
	int b=10;
	do{
		b-=a;a++;
	}
	while(b--<0);//do while��ӣ� 
	return 0;
}
