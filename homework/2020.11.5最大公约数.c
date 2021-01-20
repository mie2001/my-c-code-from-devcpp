//最大公约数：辗转相除法 
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("请输入两个整数：\n");
	scanf("%d %d",&a,&b);
    for(c=a%b;c;){
    a=b;
	b=c;		
	}
	printf("最大公约数是%d",b);
	return 0;
 } 
