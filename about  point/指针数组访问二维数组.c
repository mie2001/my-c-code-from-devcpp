//指针数组访问二维数组
#include<stdio.h>
int main() 
{
	int a[3][3]={1,5,8,2,7,9,3,4,6};//三个为一组时也要使用{} 
	//注意方括号的优先级高于*所以p时一个数组，里面的元素全是指针，这里是将其作为行指针使用 
	//这里为何是3，因为数组a的行长度是3 
	int *p[3];
	int i;
	int j;
	for(i=0;i<3;i++){
		p[i]=a[i];//注意这里是间接访问，a[i]也是一个行指针
		for(j=0;j<3;j++){
			printf("%p %p %d %d %d %d\n",a[i]+j,p[i]+j,*(p[i]+j),p[i][j],a[i][j],*(a[i]+j));
			//p[i][j]也变成了数组a？绕晕了 
		} 
	} 
}
