#include<stdio.h>
int main()
{
	int terms,next,t1=0,t2=1,i;
	printf("enter num of terms ");
	scanf("%d",&terms);
	if (terms<=0)
	{
		printf("pls enter positive nm");
	}
	if (terms>=1)
	{
		printf("%d",t1);
	}
	if (terms>=2)
	{
		printf("%d",t2);
	}
	for (i=3;i<=terms;i++)
	{
		next=t1+t2;
		printf("%d",next);
		t1=t2;
		t2=next;
			}
	return 0;
}
