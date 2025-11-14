#include <stdio.h>

int sumNatural(int n) {
    if (n == 1)      // base case
        return 1;
    return n + sumNatural(n - 1);   // recursive case
}

int main() {
    int n = 5;
    printf("Sum of first %d natural numbers = %d\n", n, sumNatural(n));
    return 0;
}

