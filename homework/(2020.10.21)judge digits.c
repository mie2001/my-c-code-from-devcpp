//�ж�һ������λ�� 
#include<stdio.h>
int main() 
{
	int x;
	int n;
	printf("������һ�����֣�");
	scanf("%d",&x); 
	n++;
	x=x/10;
	while(x>0)
	{
		n++;
		x=x/10;
	}
	printf("��������%dλ��",n);
	return 0;
 } 
