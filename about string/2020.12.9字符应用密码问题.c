//密码问题 要求回显的时候用* 
#include<stdio.h>
#include<conio.h>
#include<string.h>
int check(char *a,char *b){
	int i;
	if(strcmp(a,b)==0){
	   	return 1;
	   }
	   else{
	   	return 0; 
	   }
	}
void getsanddisplay(char *a){
	int i=0;
	do{
		a[i]=getch();//getch()是库conio.h里面的函数作用与回显有关
		if(a[i]=='\r'){
			break;//如果用户敲击回车键便停止输入 
		} 
		if(a[i]=='\b'){//如果用户敲击后退键 
			if(a[i]==0){//如果还没有输入任何密码则发出警报 
				printf("\a");
				continue;//重新循环很关键否则执行后面的代码 
			}
			i-=1;
			printf("\b");//对用户的后退键进行反馈 
		}
		else{
			i++;
			printf("*");
		}	
    }while(a[i]!='\n' && i<7);
}
int main(){
	char a[7];//储存6位数的密码
	printf("请输入6位数的密码：\n");
	getsanddisplay(a);
	printf("\n");
	printf("请输入6位数的密码：\n");
	char b[7];//储存用户输入的密码 
    //这里输入b的时候要求回显为* 
    getsanddisplay(b);
    printf("\n");
    if(check(a,b)){
    	printf("输入的密码正确\n");
	}
	else{
		printf("输入的密码不正确，请重新输入\n");
	}
	return 0;
} 
