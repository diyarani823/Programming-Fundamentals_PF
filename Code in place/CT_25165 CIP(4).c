#include <stdio.h>
#include <stdlib.h>   // for malloc, free

int main() {
    int n, i;
    int *arr;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    // allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // fill with squares of indices
    for (i = 0; i < n; i++) {
        arr[i] = i * i;
    }

    // print the array
    printf("Array of squares:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // free memory
    free(arr);

    return 0;
}

