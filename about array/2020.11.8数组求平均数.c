#include<stdio.h>
int main(){
int x;
double sum=0;
int cnt=0;
int number[6];//�������飬һ��Ҫע���ж������Ƿ����Խ������,[]������ֱ�������������Ԫ���������еĶ���ע���Ǵ�0��ʼ�� 
scanf("%d",&x);
while(x!=-1){
	number[cnt]=x;//�������е�Ԫ�ظ�ֵ 
	sum+=x;
	cnt++;
	scanf("%d",&x);//���������Σ�յģ���Ϊ��������ֿ��ܳ���100�� 
} 
if(cnt>0){
	printf("%f\n",sum/cnt);
	int i;
	for(i=0;i<cnt;i++){
		if(number[i]>sum/cnt){
			printf("%d\n",number[i]);//ʹ�������е�Ԫ�� 
		}
	}
}
 return 0;
}
