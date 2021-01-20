//输出11~200之间的回文数每行输出5个
//说明：回文数是指正序（从左向右）和倒序（从右向左)读都是一样的整数
#include<stdio.h> 
int main()
{
 printf("以下为11~200的回文数：\n");
 int x;
 int c;//c语言换行要自定义一个计数器 
 for(x=11;x<=200;x++)//for语句（）里面要用；隔开 
{
 if(x<100)
 {
 if((x%10)==(x/10))
 printf("%d\n",x);

 }	
 else
 {
 if(x%10==1)
 printf("%d\n",x);
 }	
} 
 return 0;
 } 
