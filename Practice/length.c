#include<stdio.h>
int main()
{
	int length=0;
	char str[50];
	printf("enter a sentence");
	gets(str);
	while(str[length]!='\0')
	{
		length++;
	}
	printf("length =%d",length);
	return 0;
	}
