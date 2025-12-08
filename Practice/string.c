#include<stdio.h>
int main()
{
	char first[50],last[50],full[150];
	printf("enter your first name");
	scanf("%s",first);
	printf("enter your last name");
	scanf("%s",last);
	int i=0,j=0;
	while(first!='\0')
	{
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
		    int count = 0;
    while(full[count] != '\0') {
        count++;
    }
    printf("\nFull Name: %s\n", full);
    printf("Total Characters in Full Name: %d\n", count);

    return 0;
}

}
