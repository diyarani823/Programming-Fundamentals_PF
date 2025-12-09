#include<stdio.h>
int main()
{
	
	char str1[100],str2[100];
	int i=0,j=0;
	printf("enter first string");
	fgets(str1,100,stdin);
	printf("enter second string");
	fgets(str2,100,stdin);
	while (str1[i]!='\0')
	{
		i++;
	}
	str1[i]=' ';
	i++;
	while (str2[j]!='\0')
	{
	str1[i]=str2[j];
	i++;
	j++;
}
	printf("concantenated string %s",str1);
	return 0;
}
