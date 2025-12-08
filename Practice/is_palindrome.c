#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        if (str[left] != str[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);          /* <- reads a word, no fgets */
    if (is_palindrome(str))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}

