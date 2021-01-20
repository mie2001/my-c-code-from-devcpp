//数组元素的插入（指定插入一个元素） 
/*[Error] ld returned 1 exit status出现这个错误的原因是：（目前遇见两种情况了）
1.你的编译器正在执行刚刚的程序还没关；小黑框还在。解决措施：关闭就好。
2.定义的函数和调用的函数名字不一样，也会造成产生这种错误！！！代码如下 */ 
//遇到了SIGSEVG错误，与数组有关，这里遇到的是忘记给变量取地址 
#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
//给数组中的n-1个元素赋值 
void scan(int a[],int n){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++){
	a[i]=rand()%100;
	}
	printf("目前数组的元素为：\n");
}
//打印一遍数组的元素 
void print(int a[],int n){
	int i;
    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
	}
	printf("\n");
}
//指定性插入元素 
void insert(int a[],int n){
	printf("请输入一个元素\n"); 
	int x;
	int i;
	int j;
	int b;
	scanf("%d",&x); 
	printf("请输入想要插入的位置\n");
	scanf("%d",&b); 
    i=b-1;
	for(j=n;j>i;j--){
		a[j]=a[j-1];
	}
	a[i]=x;
	printf("插入指定元素后数组改变为：\n"); 
}

int main()
{  
    int n;
    printf("请输入数组的长度\n");
    scanf("%d",&n);
    int a[n+1];
	scan(a,n);
	print(a,n);
	insert(a,n);
	print(a,n+1);
    return 0;
}
