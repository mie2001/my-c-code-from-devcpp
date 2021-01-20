//数组元素的排序（冒泡排序法）另外还有选择排序 插入排序 快速排序 希尔排序 归并排序 堆排序 基数排序 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void scan(int a[],int n){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++){
	a[i]=rand()%100;
	}
}
void print(int a[],int n){
	int i;
	printf("目前数组的元素为：\n");
    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
	}
	printf("\n");
}
/*对随机数组进行排序(冒泡排序法） 核心前后交换 缺点排完序后依旧要执行完n-1次排序 改进设置标志flag如果一轮排序
  之后没有发生交换则停止排序否则继续排序*/ 
//冒泡排序有两种算法，一种是把大的往后排 另一种是把小的往前排 
void sort(int a[],int n){	
   int i,j,temp;
   for(i=0;i<n;i++){
   	for(j=n-1;j>=i;j--){
	   if(a[j]<a[j-1]){
	   	temp=a[j-1];
	   	a[j-1]=a[j];
	   	a[j]=temp;
	   }
	   } 
   }
}

int main()
{  
    int n;
    printf("请输入数组的长度\n");
    scanf("%d",&n);
    int a[n];
	scan(a,n);
	print(a,n);
	sort(a,n);
	print(a,n);
    return 0;
}
