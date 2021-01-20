#include<stdio.h>

int main()

{

 char X[6];

 int i;

 for(i=0;i<6;i++)

 X[i]=getchar();

 for(i=0;i<6;i++)
 putchar(X[i]);

 return 0;

}
