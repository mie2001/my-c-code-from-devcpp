//从键盘输入一个int型数据，求该数绝对值的各位数字之和 
#include<stdio.h>
#include<math.h>//一定记住不是int math() 
int main()

{
	int x;
	int sum=0; 
	printf("请输入一个整数：\n");
	scanf("%d",&x);
	x=fabs(x);//c语言中取决对值时整数用abs（）  浮点数用fabs（） 
	do
	{
	sum+=x%10;
	x/=10;
	}while(x);//记住do while 语句的while后面加分号 
	printf("%d\n",sum);
	return 0;
}
   

