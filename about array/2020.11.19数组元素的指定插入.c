//����Ԫ�صĲ��루ָ������һ��Ԫ�أ� 
/*[Error] ld returned 1 exit status������������ԭ���ǣ���Ŀǰ������������ˣ�
1.��ı���������ִ�иոյĳ���û�أ�С�ڿ��ڡ������ʩ���رվͺá�
2.����ĺ����͵��õĺ������ֲ�һ����Ҳ����ɲ������ִ��󣡣����������� */ 
//������SIGSEVG�����������йأ����������������Ǹ�����ȡ��ַ 
#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
//�������е�n-1��Ԫ�ظ�ֵ 
void scan(int a[],int n){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++){
	a[i]=rand()%100;
	}
	printf("Ŀǰ�����Ԫ��Ϊ��\n");
}
//��ӡһ�������Ԫ�� 
void print(int a[],int n){
	int i;
    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
	}
	printf("\n");
}
//ָ���Բ���Ԫ�� 
void insert(int a[],int n){
	printf("������һ��Ԫ��\n"); 
	int x;
	int i;
	int j;
	int b;
	scanf("%d",&x); 
	printf("��������Ҫ�����λ��\n");
	scanf("%d",&b); 
    i=b-1;
	for(j=n;j>i;j--){
		a[j]=a[j-1];
	}
	a[i]=x;
	printf("����ָ��Ԫ�غ�����ı�Ϊ��\n"); 
}

int main()
{  
    int n;
    printf("����������ĳ���\n");
    scanf("%d",&n);
    int a[n+1];
	scan(a,n);
	print(a,n);
	insert(a,n);
	print(a,n+1);
    return 0;
}
