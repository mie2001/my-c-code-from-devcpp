//����Ԫ�صĲ��루������ݼ�˳����룩 
#include<stdio.h>
//�������е�n-1��Ԫ�ظ�ֵ 
void scan(int a[],int n){
	int i;
	printf("�����˳������%d�����ȵ�����Ԫ��\n",n-1);
	for(i=0;i<n-1;i++){
	scanf("%d",&a[i]);
	
	}
}
//��ӡһ�������Ԫ�� 
void print1(int a[],int n){
	int i;
	printf("Ŀǰ����Ԫ��Ϊ\n");
    for(i=0;i<n-1;i++){
    printf("%d ",a[i]);
	}
	printf("\n");
}
//����Ԫ�صĲ��� 
void insert(int a[],int n){
	printf("������һ������Ҫ�����Ԫ��\n");
	int x;
	scanf("%d",&x);
	printf("����Ԫ�غ������Ϊ\n");
	int i,j;
	for(i=0;i<n&&x>a[i];i++);//ע������Ҫ��; 
	for(j=n-1;j>i;j--){
		a[j]=a[j-1];
	}
	a[i]=x;
}
//��ӡһ�������Ԫ��
void print2(int a[],int n){
	int i;
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
	}
}
int main()
{  
    int n;
    printf("����������ĳ���\n");
    scanf("%d",&n);
    int a[n];
	scan(a,n);
	print1(a,n);
	insert(a,n);
	print2(a,n);	
    return 0;
}
