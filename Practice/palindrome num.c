#include <stdio.h>

int main() 
{
    int num, original, reverse = 0, dig;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

    while(num > 0) 
	{
        dig = num % 10;        // get last digit
        reverse = reverse * 10 + dig;  // build reversed number
        num = num / 10;        // remove last digit
    }

    if(reverse == original)
        printf("%d is a palindrome\n", original);
    else
        printf("%d is not a palindrome\n", original);

    return 0;
}

