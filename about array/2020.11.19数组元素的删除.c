//����Ԫ�ص�ɾ�� ����ɾ����һ������������Ԫ�أ� 
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
	printf("Ŀǰ�����Ԫ��Ϊ��\n");
    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
	}
	printf("\n");
}
void delete(int a[],int n){
	int i,j,x;
	printf("����������Ҫɾ��������Ԫ��\n");
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
    printf("����������ĳ���\n");
    scanf("%d",&n);
    int a[n];
	scan(a,n);
	print(a,n);
	delete(a,n);
	print(a,n-1);
    return 0;
}
