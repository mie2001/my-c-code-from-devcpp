#include<stdio.h>
int main(){
    double a,b,c,d;
	printf("请输入三个数字（空格分隔）:\n");
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
		printf("无法构成三角形\n");}
		else if(a==b&&b==c){
			printf("构成的三角形为等边三角形\n");}//思考为什么a==b==c不行 
			else if(a*a+b*b==c*c&&a==b){
				printf("构成的三角形为等腰直角三角形\n");}
				else if(a*a+b*b==c*c){
					printf("构成的三角形为直角三角形\n");}
					else if(a==b||b==c){
						printf("构成的三角形为等腰三角形\n");}
						else{
							printf("构成的三角形为一般三角形\n");}
 } 

