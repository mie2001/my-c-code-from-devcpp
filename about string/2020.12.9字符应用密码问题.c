//�������� Ҫ����Ե�ʱ����* 
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
		a[i]=getch();//getch()�ǿ�conio.h����ĺ�������������й�
		if(a[i]=='\r'){
			break;//����û��û��س�����ֹͣ���� 
		} 
		if(a[i]=='\b'){//����û��û����˼� 
			if(a[i]==0){//�����û�������κ������򷢳����� 
				printf("\a");
				continue;//����ѭ���ܹؼ�����ִ�к���Ĵ��� 
			}
			i-=1;
			printf("\b");//���û��ĺ��˼����з��� 
		}
		else{
			i++;
			printf("*");
		}	
    }while(a[i]!='\n' && i<7);
}
int main(){
	char a[7];//����6λ��������
	printf("������6λ�������룺\n");
	getsanddisplay(a);
	printf("\n");
	printf("������6λ�������룺\n");
	char b[7];//�����û���������� 
    //��������b��ʱ��Ҫ�����Ϊ* 
    getsanddisplay(b);
    printf("\n");
    if(check(a,b)){
    	printf("�����������ȷ\n");
	}
	else{
		printf("��������벻��ȷ������������\n");
	}
	return 0;
} 
