#include<stdio.h>
int main()
{
	char str1[100],reverse[100];
	int i,j,len;
	printf("Enter a string");
	scanf("%s",str1);
	i=0;
	len=strlen(str1);
	for (j=len-1;j>=0;j--)
	{
		reverse[i]=str1[j];
		i++;
	}
	if(strcmp(str1, reverse) == 0)
{
	printf("palindrome");
}
else
printf("not a palindrome");
}
