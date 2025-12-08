#include <stdio.h>

int main() {
    int i = 0, j = 0, total = 0;
    while (i < 3) {
        j = 0;
        while (j < 5) {
            total += i * j;
            if (i == 2 && j == 3) {
                break;
            }
            j++;
        }
        i++;
    }
    printf("total = %d\n", total);
    return 0;
}

