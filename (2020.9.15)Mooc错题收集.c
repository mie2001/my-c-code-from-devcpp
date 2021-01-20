#include<stdio.h>
int main(){
	//else if嵌套       下列程序段执行后，m的值为20 
	int a=0, b=20, c=40, m=60;
    if (a) m=a;
    else if(b) m=b;
    else if(c) m=c; 
    //下面程序段中，循环语句的循环次数是 死循环 
	int x=0;
    while( x<6 ){
    if ( x%2 ) continue;
    if ( x==4 ) break;
    x++;} 
    //该程序的运行结果是 wrong
	int x=5,y=4,z=3;
    if(x>y>z) printf("right");
    else printf("wrong");
    return 0; 
    //下列程序段执行结束后，k的值为25
    int  i,j,k=0; 
	for (i=1;i<=3; i++)
    for (j=1;j<=i; j++)
    k+=i*j;
    //输出：X与Y相等，且执行完后x等于y
    int x = 0, y = 3;
    if  (x = y)  printf(“X与Y相等\n”);
    //下列   __循环不是无限循环
    while（x=1）{x=1;} 
    for（y=1,x=1;x>=++y ; x++）;
    for（y=0;x=1;++y;
    for（; ; x=0;
    // 执行后的输出结果是____8____。
    int  fun(int x,int y){return(x+y);}
    int  main()
    {int a=1,b=2,c=3,sum;
    sum=fun((a++,b++,a+b),c++);
    printf("%d\n",sum);
    return 0;}


 
} 
