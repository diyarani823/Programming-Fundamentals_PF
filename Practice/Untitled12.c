#include<stdio.h>
int main(){
int i,num;
printf("enter a num");
scanf("%d",&num);
for(i=1;i<11;i++)
{
	printf("%d x %d=%d\n",num,i,num*i);
}
}
