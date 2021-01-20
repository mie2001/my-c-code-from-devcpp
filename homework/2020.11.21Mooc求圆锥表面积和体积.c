#include<stdio.h>
#include<math.h> 
#define Pi 3.14
//函数：求圆锥的表面积 
double  Areaofsurface(double r,double h){
    double b;
    double s=sqrt(h*h+r*r);
    b=Pi*r*r+Pi*r*s;
    return b;
} 
//函数：求圆锥的体积 
double Volume(double r,double h){
	double a;
	a=Pi*r*r*h/3;
	return a;
}
int main(){
	double r;
	double h;
	printf("请输入两个实数表示圆锥的半径和高\n");
	scanf("%lf%lf",&r,&h);
	printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n",r,h,Areaofsurface(r,h),Volume(r,h));
} 
