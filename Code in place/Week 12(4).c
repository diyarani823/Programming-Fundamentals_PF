#include <stdio.h>

void printChar(char *p) {
    printf("Character: %c\n", *p);
}

int main() {
    char ch = 'A';
    printChar(&ch);
    return 0;
}

