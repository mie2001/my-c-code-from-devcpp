//数组元素的删除 （仅删除第一个遇到的数组元素） 
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
void delete(int a[],int n){
	int i,j,x;
	printf("请输入你想要删除的数组元素\n");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(x==a[i]){
			for(j=i;j<n-1;j++){
				a[j]=a[j+1];
			}
		}
	}
}
int main()
{   int n;
    printf("请输入数组的长度\n");
    scanf("%d",&n);
    int a[n];
	scan(a,n);
	print(a,n);
	delete(a,n);
	print(a,n-1);
    return 0;
}
