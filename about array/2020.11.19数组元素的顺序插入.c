//数组元素的插入（递增或递减顺序插入） 
#include<stdio.h>
//给数组中的n-1个元素赋值 
void scan(int a[],int n){
	int i;
	printf("请递增顺序输入%d个长度的数组元素\n",n-1);
	for(i=0;i<n-1;i++){
	scanf("%d",&a[i]);
	
	}
}
//打印一遍数组的元素 
void print1(int a[],int n){
	int i;
	printf("目前数组元素为\n");
    for(i=0;i<n-1;i++){
    printf("%d ",a[i]);
	}
	printf("\n");
}
//数组元素的插入 
void insert(int a[],int n){
	printf("请输入一个你想要插入的元素\n");
	int x;
	scanf("%d",&x);
	printf("插入元素后数组变为\n");
	int i,j;
	for(i=0;i<n&&x>a[i];i++);//注意这里要加; 
	for(j=n-1;j>i;j--){
		a[j]=a[j-1];
	}
	a[i]=x;
}
//打印一遍数组的元素
void print2(int a[],int n){
	int i;
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
	}
}
int main()
{  
    int n;
    printf("请输入数组的长度\n");
    scanf("%d",&n);
    int a[n];
	scan(a,n);
	print1(a,n);
	insert(a,n);
	print2(a,n);	
    return 0;
}
