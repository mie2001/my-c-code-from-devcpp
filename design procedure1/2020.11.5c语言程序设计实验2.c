#include<stdio.h>
int main(){
    double a,b,c,d;
	printf("�������������֣��ո�ָ���:\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a>=b&&a>=c){
		d=a;
		a=c;
		c=d;	 
		}
	if(a<=b&&b>=c){
		d=b;
		b=c;
		c=d;	 
		}	
	if(a+b<=c){
		printf("�޷�����������\n");}
		else if(a==b&&b==c){
			printf("���ɵ�������Ϊ�ȱ�������\n");}//˼��Ϊʲôa==b==c���� 
			else if(a*a+b*b==c*c&&a==b){
				printf("���ɵ�������Ϊ����ֱ��������\n");}
				else if(a*a+b*b==c*c){
					printf("���ɵ�������Ϊֱ��������\n");}
					else if(a==b||b==c){
						printf("���ɵ�������Ϊ����������\n");}
						else{
							printf("���ɵ�������Ϊһ��������\n");}
 } 

