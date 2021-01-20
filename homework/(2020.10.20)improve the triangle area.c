/*三角形面积的改善*/
#include<stdio.h>
#include<math.h> 
int main()
{
	double edge1,edge2,edge3,p,area;
	printf("请输入三条边的长度");
	scanf("%lf%lf%lf",&edge1,&edge2,&edge3);
	if(edge1>0&&edge2>0&&edge3>0&&edge1+edge2>edge3&&edge1+edge3>edge2&&edge2+edge3>edge1)
	{
	p=(edge1+edge2+edge3)/2; 
	area=sqrt(p*(p-edge1)*(p-edge2)*(p-edge3));
	printf("area=%lf\n",area);
	}
	else
	{
		printf("输入的三角形边长有误"); 
	}
	return 0;
}
