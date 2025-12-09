#include <stdio.h>

int main() 
{
   int n,i,isprime=1;
   printf("enter a nmber");
   scanf("%d",&n);
   if (n<2)
   	isprime=0;
   	for (i=2;i*i<=n;i++)
   	{
   		if (n%i==0)
   		{
   			isprime==0;
   			break;
		   }
	   }
	   if(isprime==0)
	   	printf(" not prime num");
   else
   	printf("not prime");
}
