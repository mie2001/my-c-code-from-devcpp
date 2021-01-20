//输出11~200之间的回文数每行输出5个
//说明：回文数是指正序（从左向右）和倒序（从右向左)读都是一样的整数
#include<stdio.h>
int main()
{
printf("以下为11～200中的回文数：\n");
int x;
int y;
int z;
int cnt=0;//c语言自定义一个计数器来实现每五个换行的操作 
for(x=11;x<=200;x++)
{
z=0;
y=x;
while(y)
{
z=z*10+y%10;
y/=10;
}
if(z==x)
{
printf("%-3d ",x);
cnt++;
if(cnt==5)
{
printf("\n");
cnt=0;
} 
}
}
return 0;
}
