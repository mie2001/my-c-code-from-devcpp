#include<stdio.h>
void exchange(int *p[])
{
	int i = 0, j = 0, max = *p[0], min = *p[0],m=0,n=9;
	for (i = 0; i < 10; i++)
	{
		if (max < *p[i])
		{
			
			max = *p[i];
			m=i;
		
		}

	}
	for (j = 0; j < 10; j++)
	{
		if (min > *p[j])
		{
			
			min = *p[j];
			n = j;
			
		}
	}
	*p[n] = *p[0];
	*p[0] = min;
	*p[m] = *p[9];
	*p[9] = max;
}
void print(int a[])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int arr[10];
	int i = 0;
	int * p[10];
	printf("请输入10个整数：\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		p[i] = &arr[i];
	}
	printf("目前数组的元素为：\n");
	print(arr);
	exchange(p);
	printf("\n");
	printf("交换后数组的元素为：\n");
	print(arr);
	return 0;
}
