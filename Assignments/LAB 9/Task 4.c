#include <stdio.h>

int main() {
    float num;
    printf("Enter a positive number: ");
    scanf("%f", &num);

    float rounded = (int)(num * 100 + 0.5) / 100.0;
    printf("Rounded value = %.2f\n", rounded);

    return 0;
}

