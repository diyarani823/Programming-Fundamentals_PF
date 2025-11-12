#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void countFrequency(int arr[], int size) {
    int freq[100] = {0};

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    printf("Element\tFrequency\n");
    for (int i = 0; i < size; i++) {
        if (freq[arr[i]] != 0) {
            printf("%d\t%d\n", arr[i], freq[arr[i]]);
            freq[arr[i]] = 0;
        }
    }
}

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];
    srand(time(0));

    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 10;
        printf("%d ", array[i]);
    }

    printf("\n");
    countFrequency(array, size);

    return 0;
}

