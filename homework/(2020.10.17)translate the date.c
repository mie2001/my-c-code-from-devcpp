#include<stdio.h>
int main()
{
	int year ,month,day;
	printf("请用标准格式输入一个日期（YYYY-MM-DD）:");
	scanf("%d-%d-%d",&year,&month,&day);
	printf("中国日期格式：%d年%d月%d日\n",year,month,day);
	printf("美国日期格式：%d/%d/%d\n",month,day,year);
	printf("英国日期各式：%d/%d/%d\n",day,month,year);
	return 0;
}
