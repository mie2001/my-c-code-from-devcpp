//����10����ͬ������� 
//����c99���������鳤�ȶ���������಻���ԣ���������Զ����������ڵı��������ͻ�����c99 
#include<stdio.h>
#include<stdlib.h>//��������������ĺ����Ŀ� 
#include<time.h>//����ϵͳʱ�������Խ�α�����������
void print(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
void different(int a[],int n){
	int i,j;
	srand(time(NULL));//srand�����������ڵ���rand�����������֮ǰʹ�õ�
	for(i=0;i<n;i++){
		a[i]=rand()%100;//rand������һ������������ĺ��� %100������������ΧΪ0~99 
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
