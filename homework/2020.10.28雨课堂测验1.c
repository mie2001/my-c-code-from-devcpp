//�Ӽ�������һ��int�����ݣ����������ֵ�ĸ�λ����֮�� 
#include<stdio.h>
#include<math.h>//һ����ס����int math() 
int main()

{
	int x;
	int sum=0; 
	printf("������һ��������\n");
	scanf("%d",&x);
	x=fabs(x);//c������ȡ����ֵʱ������abs����  ��������fabs���� 
	do
	{
	sum+=x%10;
	x/=10;
	}while(x);//��סdo while ����while����ӷֺ� 
	printf("%d\n",sum);
	return 0;
}
   

