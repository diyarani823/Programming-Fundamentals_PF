//Write a C program to input a character from user and check whether given character is small
//alphabet, capital alphabet, digit or special character, using if else.
#include<stdio.h>
int main()
{
	char a;
	printf("Enter a character");
	scanf("%c",&a);
	if(a >= 'a' && a<='z'){
	printf("small character");
}
	else if(a >= 'A' && a<='Z'){
	printf("Big ch");
}
		else if(a >= '0' && a<='9'){
	printf("nm");
}
	else {
		printf("symbol");
	}
	
}
