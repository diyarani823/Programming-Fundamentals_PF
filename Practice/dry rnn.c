#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 15, d = 2;
    int result;

    result = (a + b * c) > (a / c - b) && (a % b == 0);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    printf("Result = %d\n", result); // 1 = true, 0 = false

    return 0;
}

