//const ��ָ������ֽ�Ϸ�ʽ 
#include<stdio.h>
int main(){
	int a=10;
	int const *p;//ò��const��λ��û��Ӱ�� 
	p=&a;
	//*p=20;��������ܸ�дָ���ֵ������ָ����ԣ�����ԭ������Ч 
	printf("%d %d\n",*p,a);
	
	int b=20;
	int *const u=&b;//��������ڶ����ʱ���u�����ַ 
	printf("%d\n",*u);
	
	int c=30;
    int *i=&c;
	i=&b;
	printf("%d",*i);
	
	
	 
}
