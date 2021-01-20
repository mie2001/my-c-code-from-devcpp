//冒泡排序 
#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
void input(int a[],int n){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++){
		a[i]=rand()%100;
	}
	
}
void rank(int a[],int n){
	int i;
	int j;
	int temp;
	int flag;  //最多排4轮 6974 6749 6479 4679    
	for(i=0;i<n;i++){
		flag=0;
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			flag=1;
			}
		}
		if(flag==0){//如果没有发生值的交换 
			break;
		}
	}
} 
void output(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main()
{ int n;
  scanf("%d",&n);
  int a[n];
  input(a,n);
  printf("目前数组元素为:\n");
  output(a,n);
  printf("\n");
  rank(a,n);
  printf("冒泡排序后数组元素变为:\n");
  output(a,n);	
}
