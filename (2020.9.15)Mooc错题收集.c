#include<stdio.h>
int main(){
	//else ifǶ��       ���г����ִ�к�m��ֵΪ20 
	int a=0, b=20, c=40, m=60;
    if (a) m=a;
    else if(b) m=b;
    else if(c) m=c; 
    //���������У�ѭ������ѭ�������� ��ѭ�� 
	int x=0;
    while( x<6 ){
    if ( x%2 ) continue;
    if ( x==4 ) break;
    x++;} 
    //�ó�������н���� wrong
	int x=5,y=4,z=3;
    if(x>y>z) printf("right");
    else printf("wrong");
    return 0; 
    //���г����ִ�н�����k��ֵΪ25
    int  i,j,k=0; 
	for (i=1;i<=3; i++)
    for (j=1;j<=i; j++)
    k+=i*j;
    //�����X��Y��ȣ���ִ�����x����y
    int x = 0, y = 3;
    if  (x = y)  printf(��X��Y���\n��);
    //����   __ѭ����������ѭ��
    while��x=1��{x=1;} 
    for��y=1,x=1;x>=++y ; x++��;
    for��y=0;x=1;++y;
    for��; ; x=0;
    // ִ�к����������____8____��
    int  fun(int x,int y){return(x+y);}
    int  main()
    {int a=1,b=2,c=3,sum;
    sum=fun((a++,b++,a+b),c++);
    printf("%d\n",sum);
    return 0;}


 
} 
