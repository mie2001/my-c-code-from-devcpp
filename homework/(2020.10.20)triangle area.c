/*�������ε����*/
#include<stdio.h>
#include<math.h>
int main() 
{
	double edge1,edge2,edge3,p,area;
	printf("�����������ߵĳ���")��
	scanf("%lf%lf%lf",&edge1,&edge2,&edge3);
	p=(edge1+edge2+edge3)/2�� 
	area=sqrt(p*(p-edge1)*(p-edge2)*(p-edge3))��
	printf("area=%lf\n",area);
	return 0; 
 } 
