#include<stdio.h>//pow()幂函数很好用 
#include<math.h>
int main(){
	double m,s;
	int i;
	int fact=1;
	int sign=1;
	scanf("%lf",&m);
	for(i=1;pow(m,i)/fact>=1e-4;i++){
		fact*=i;
		s+=sign*pow(m,i)/fact;
		sign*=-1;
	}
	printf("%.2f\n",s);
}
