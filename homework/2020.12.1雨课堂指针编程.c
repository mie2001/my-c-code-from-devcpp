//雨课堂作业 指针编程
//输入10个整数，最小的与第一个数交换，最大的与最后一个数交换，输出交换前和交换后的元素 
#include<stdio.h> 
void input(int a[],int n);
void output(int a[],int n);
void swap(int a[],int n); 
int main()
{
	int a[10];
	printf("请输入10个整数：\n");
	input(a,10);
	printf("目前数组的元素为：\n");
	output(a,10);
	swap(a,10);
	printf("交换元素后数组的元素为：\n"); 
	output(a,10);
 } 
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void output(int a[],int n)
{
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void swap(int a[],int n)
{
	int max=a[9];
	int c;
	int C;
	c=a[9];
	int min=a[0];
	int d;
	int D;
	d=a[0];
	int i;
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			C=i;
		}
	}
	a[C]=c;
	a[9]=max;
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
			D=i;
		}
	}
	a[D]=d;
	a[0]=min;
}
