//判断一个数的位数 
#include<stdio.h>
int main() 
{
	int x;
	int n;
	printf("请输入一个数字：");
	scanf("%d",&x); 
	n++;
	x=x/10;
	while(x>0)
	{
		n++;
		x=x/10;
	}
	printf("该数字有%d位数",n);
	return 0;
 } 
