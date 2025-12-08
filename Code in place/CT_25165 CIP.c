#include <stdio.h>
#include <stdlib.h>   // for malloc, free

int main() {
    int n, i;
    float *arr;

    printf("Enter number of floats: ");
    scanf("%d", &n);

    // allocate memory for n floats
    arr = (float *)malloc(n * sizeof(float));

    if (arr == NULL) {   // always check
        printf("Memory allocation failed.\n");
        return 1;
    }

    // input values
    printf("Enter %d float values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // print values
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = %.2f\n", i, arr[i]);
    }

    // free memory
    free(arr);

    return 0;
}

