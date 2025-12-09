#include<stdio.h>
int main()
{
	char str1[10]="abc";
	char str2[10]="abc";
	int i=0;
	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if (str1[i]!=str2[i])
		break;
		i++;
	}
	if (str1[i]==str2[i])
		printf("strings are equual");
		else if (str1[i]!=str2[i])
			printf("strings are not equal");
	}

