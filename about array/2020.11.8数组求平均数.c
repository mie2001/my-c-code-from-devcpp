#include<stdio.h>
int main(){
int x;
double sum=0;
int cnt=0;
int number[6];//定义数组，一定要注意判断数组是否存在越界的情况,[]里的数字必须是整数，单元是依次排列的而且注意是从0开始的 
scanf("%d",&x);
while(x!=-1){
	number[cnt]=x;//对数组中的元素赋值 
	sum+=x;
	cnt++;
	scanf("%d",&x);//这个程序是危险的，因为输入的数字可能超过100个 
} 
if(cnt>0){
	printf("%f\n",sum/cnt);
	int i;
	for(i=0;i<cnt;i++){
		if(number[i]>sum/cnt){
			printf("%d\n",number[i]);//使用数组中的元素 
		}
	}
}
 return 0;
}
