//const 与指针的三种结合方式 
#include<stdio.h>
int main(){
	int a=10;
	int const *p;//貌似const的位置没有影响 
	p=&a;
	//*p=20;会出错，不能改写指向的值，仅对指针而言，不对原变量起效 
	printf("%d %d\n",*p,a);
	
	int b=20;
	int *const u=&b;//这里必须在定义的时候给u赋予地址 
	printf("%d\n",*u);
	
	int c=30;
    int *i=&c;
	i=&b;
	printf("%d",*i);
	
	
	 
}
