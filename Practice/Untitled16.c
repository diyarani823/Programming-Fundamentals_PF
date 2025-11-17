#include<stdio.h>
int main()
{
	char full[120],last[50],first[50];
	int i=0,j=0;
	printf("enter first name");
	scanf("%s",&first);
	printf("enter last name");
	scanf("%s",&last);
	while(first[i]!='\0'){
		full[i]=first[i];
		i++;
	}
	full[i]=' ';
	i++;
	while(last[j]!='\0')
	{
		full[i]=last[j];
		i++;
		j++;
	}
	full[i]='\0';
	int count=0;
	while(full[count]!='\0')
	{
		count++;
	}
	printf("full name is %s\n",full);
	printf("total cont of full name is %d",count);
	return 0;
}
