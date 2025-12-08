#include <stdio.h>
#include <stdlib.h>   // for malloc, realloc, free

int main() {
    int *arr;
    int i;

    // Step 1: allocate for 3 integers
    arr = (int *)malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Initial malloc failed.\n");
        return 1;
    }

    // assign values to first 3
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // Step 2: expand to 5 integers using realloc
    int *temp = (int *)realloc(arr, 5 * sizeof(int));
    if (temp == NULL) {
        printf("Realloc failed.\n");
        // original arr is still valid, so free it
        free(arr);
        return 1;
    }
    arr = temp;   // use the new pointer

    // assign values to the new elements
    arr[3] = 40;
    arr[4] = 50;

    // Step 3: print all 5 values
    printf("Array after realloc to 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Step 4: free memory
    free(arr);

    return 0;
}

