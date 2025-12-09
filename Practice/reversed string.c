#include<stdio.h>
int main()
{
	char str[]="hello";
	char temp;
	int i=0;
	int j=4;
	while (i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("reversed string is %s",str);
	return 0;
	}
