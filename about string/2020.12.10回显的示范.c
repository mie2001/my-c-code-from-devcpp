#include <stdio.h>
#include <conio.h>//https://baike.baidu.com/item/getch%28%29/10996394?fr=aladdin
#include <windows.h>//system("pause"); 
int main()
{
    char p[20];
    char *password="1234";
    int i=0;
    printf("enter your password(����������)\n");
    do
    {
        p[i]=getch();
        if(p[i]=='\r')//������ڻس��� 
            break;
        if(p[i]=='\b')//������˸�������û���Ҫɾ��һ������ 
        {
            if(i==0)
            {
                printf("\a");
                continue;
            }
            i=i-1;
           // printf("\b"); 
		  printf("\b \b"); //�� ���˸�Ȼ��ո񸲸�Ȼ�����˸��� 
        }
        else
        {
            i=i+1;
            printf("*");
        }
    }while(p[i]!='\n' && i<20);
    p[i]='\0';
    printf("\n��ȷ���룺%s;�������룺%s\n",password,p);
    if(strcmp(p,password)==0)
        printf("right!\n");
    else
        printf("error!\n");
    system("pause");//��windows�Դ��Ŀ⺯��<windows.h>���� 
    return 0;
}
