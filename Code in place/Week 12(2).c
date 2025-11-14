#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Value of int = %d\n", *p1);
    printf("Value of float = %.2f\n", *p2);
    printf("Value of char = %c\n", *p3);

    return 0;
}

