//生成10个不同的随机数 
//除了c99可以在数组长度定义变量其余不可以，计算机考试都不允许，现在的编译器类型基本是c99 
#include<stdio.h>
#include<stdlib.h>//包含生成随机数的函数的库 
#include<time.h>//利用系统时间的随机性将伪随机变成真随机
void print(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
void different(int a[],int n){
	int i,j;
	srand(time(NULL));//srand函数，这是在调用rand（）这个函数之前使用的
	for(i=0;i<n;i++){
		a[i]=rand()%100;//rand（）是一个产生随机数的函数 %100代表的随机数范围为0~99 
		if(i>=1){
			for(j=i-1;j>=0;j--){
				if(a[i]=a[j]){
					i=i-1;
					continue;
				}
			}
		}
	}
}
int main(){
    int a[5];
	different(a,5);
	print(a,5);
	return 0;
} 
