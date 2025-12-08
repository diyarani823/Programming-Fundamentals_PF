#include <stdio.h>
#include <stdlib.h>   // for calloc, free

int main() {
    int *arr;
    int i;

    // allocate memory for 10 integers, initialized to 0
    arr = (int *)calloc(10, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // print values (should all be 0)
    printf("Values in the calloc array:\n");
    for (i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // free memory
    free(arr);

    return 0;
}

