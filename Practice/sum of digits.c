#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n) {
    if (n < 0) n = -n;   /* handle negative numbers */
    int sum = 0;
    if (n == 0) return 0;
    while (n > 0) {
        sum += n % 10;   /* add last digit */
        n /= 10;         /* remove last digit */
    }
    return sum;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Sum of digits = %d\n", sum_of_digits(num));
    return 0;
}

