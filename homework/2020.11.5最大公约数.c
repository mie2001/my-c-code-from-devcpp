//���Լ����շת����� 
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("����������������\n");
	scanf("%d %d",&a,&b);
    for(c=a%b;c;){
    a=b;
	b=c;		
	}
	printf("���Լ����%d",b);
	return 0;
 } 
