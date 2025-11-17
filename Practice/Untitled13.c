#include<stdio.h>
int main()
{
int sum=0;
int avg,i;
int marks[5];
for(i=0;i<=4;i++)
{
	printf("enter marks ");
	scanf("%d",&marks[i]);
}
for(i=0;i<=4;i++)
{
	sum=sum+marks[i];
}
	avg=sum/5;

	printf("total marks are %d\n",sum);
		printf("avg is %d\n",avg);
}

