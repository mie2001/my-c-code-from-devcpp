#include <stdio.h>
#include <conio.h>//https://baike.baidu.com/item/getch%28%29/10996394?fr=aladdin
#include <windows.h>//system("pause"); 
int main()
{
    char p[20];
    char *password="1234";
    int i=0;
    printf("enter your password(请输入密码)\n");
    do
    {
        p[i]=getch();
        if(p[i]=='\r')//如果等于回车键 
            break;
        if(p[i]=='\b')//如果是退格键表明用户想要删除一个密码 
        {
            if(i==0)
            {
                printf("\a");
                continue;
            }
            i=i-1;
           // printf("\b"); 
		  printf("\b \b"); //妙啊妙啊 先退格然后空格覆盖然后再退格妙啊妙啊 
        }
        else
        {
            i=i+1;
            printf("*");
        }
    }while(p[i]!='\n' && i<20);
    p[i]='\0';
    printf("\n正确密码：%s;输入密码：%s\n",password,p);
    if(strcmp(p,password)==0)
        printf("right!\n");
    else
        printf("error!\n");
    system("pause");//在windows自带的库函数<windows.h>里面 
    return 0;
}
