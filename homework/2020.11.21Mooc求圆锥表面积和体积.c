#include<stdio.h>
#include<math.h> 
#define Pi 3.14
//��������Բ׶�ı���� 
double  Areaofsurface(double r,double h){
    double b;
    double s=sqrt(h*h+r*r);
    b=Pi*r*r+Pi*r*s;
    return b;
} 
//��������Բ׶����� 
double Volume(double r,double h){
	double a;
	a=Pi*r*r*h/3;
	return a;
}
int main(){
	double r;
	double h;
	printf("����������ʵ����ʾԲ׶�İ뾶�͸�\n");
	scanf("%lf%lf",&r,&h);
	printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n",r,h,Areaofsurface(r,h),Volume(r,h));
} 
