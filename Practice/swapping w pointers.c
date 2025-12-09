#include<stdio.h>
int main()
{
	int a,b,*p1,*p2,temp;
	p1=&a;
	p2=&b;
	printf("enter 2 nm");
	scanf("%d %d",&a,&b);
	temp=*p1;
*p1=*p2;
*p2=temp;
printf("after swapping %d %d",a,b);
}
