 //��ǰ1000��֮�͵�Դ�������
 #include<stdio.h>
 int main(){
 
 double sum,i;
 int a=1,b=2,sign=1,c;
 for(i=1;i<=1000;i++){
 	sum+=b/a*sign;
 	c=a+b;
 	a=b;
 	b=c;
 	sign*=-1;
 }
	printf("s�ĺ�Ϊ��%f\n",sum);
	return 0;
}
