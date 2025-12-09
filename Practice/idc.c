/*#include<stdio.h>
int main()
{
	char str[50];
	int length=0;
	printf("enter a string");
	gets(str);
	while(str[length]!='\0')
	{
		length++;
	}
	printf("%d",length);
}*
#include<stdio.h>
int main()
{
	char str1[100]="abc";
char str2[100],temp;
int i=0;
while(str1[i]!='\0')
{
	str2[i]=str1[i];
	temp=str1[i];
	i++;
}
str2[i]='\0';
printf("%s",str2);
}*
#include<stdio.h>
int main()
{
	char str[]="hello";
	char temp;
	int i=0;
	int j=4;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("reversed string %s",str);
}
#include<stdio.h>
int main()
{
	int n,i;
	int isprime=1;
	printf("enter a num");
	scanf("%d",&n);
	if(n<2)
		isprime=0;
		for(i=2;i*i<=n;i++)
		{
			if(n%i==0)
			break;
		}
		if(isprime==0)
		{
			printf("%d is not prime",n);
			
		}
	else
		{
			printf("%d is prime",n);
			
		
		}
		}*/
	#include<stdio.h>
int main()
{
int terms,next,i,t1=0,t2=1;
printf("enter num of terms");
scanf("%d",&terms);
if(terms<=0)
{
	printf("pls enter +ve num");
	}
	printf("fibnocci series");
	if(terms>=1)
		printf("%d",t1);
			if(terms>=2)
		printf("%d",t2);
			for(i=3;i<=terms;i++){
				next=t1+t2;
				printf("%d",next);
				t1=t2;
				t2=next;
				
			}
		printf("\n");
	}
	

