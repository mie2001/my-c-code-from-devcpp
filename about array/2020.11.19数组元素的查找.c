//����Ԫ�صĲ��� 
#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
//�������е�Ԫ�ظ�ֵ 
void scan(int a[],int n){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++){
		a[i]=rand()%100;
	}
}
//��ӡһ�������Ԫ�� 
void print(int a[],int n){
	int i;
    for(i=0;i<n;i++){
    printf("%d\n",a[i]);
	}
}
//����Ԫ�صĲ��� 
void search(int a[],int n){
	int x;
	int i;
	printf("������һ��������\n");
	scanf("%d",&x);
	for(i=0;i<n;i++){
	if(x==a[i]){
		printf("�����к���%d\n",x);
		break;
    }
    else{
    	printf("�����в�����%d\n",x);
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
