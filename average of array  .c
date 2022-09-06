#include<stdio.h>
int main(void)
{
	double arr[50],i=0,sum=0,average;
	printf("enter five element\n");
	for(i=0;i<5;i++)
	{
		scanf("%lf",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	average=average/5.0;
	printf("%lf",average);
}
