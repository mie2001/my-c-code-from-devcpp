//����Ԫ�ص�����ð�����򷨣����⻹��ѡ������ �������� �������� ϣ������ �鲢���� ������ �������� 
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
/*����������������(ð�����򷨣� ����ǰ�󽻻� ȱ�������������Ҫִ����n-1������ �Ľ����ñ�־flag���һ������
  ֮��û�з���������ֹͣ��������������*/ 
//ð�������������㷨��һ���ǰѴ�������� ��һ���ǰ�С����ǰ�� 
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
    printf("����������ĳ���\n");
    scanf("%d",&n);
    int a[n];
	scan(a,n);
	print(a,n);
	sort(a,n);
	print(a,n);
    return 0;
}
