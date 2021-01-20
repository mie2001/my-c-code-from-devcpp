//数组元素的查找 
#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
//给数组中的元素赋值 
void scan(int a[],int n){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++){
		a[i]=rand()%100;
	}
}
//打印一遍数组的元素 
void print(int a[],int n){
	int i;
    for(i=0;i<n;i++){
    printf("%d\n",a[i]);
	}
}
//数组元素的查找 
void search(int a[],int n){
	int x;
	int i;
	printf("请输入一个正整数\n");
	scanf("%d",&x);
	for(i=0;i<n;i++){
	if(x==a[i]){
		printf("数组中含有%d\n",x);
		break;
    }
    else{
    	printf("数组中不含有%d\n",x);
    	break;
	}
	}
}
int main()
{  
	int a[5];
	scan(a,5);
	print(a,5);
    search(a,5);
    return 0;
}
