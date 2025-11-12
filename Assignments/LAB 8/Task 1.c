#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50], full[100];

    printf("Enter first name: ");
    scanf("%s", first);

    printf("Enter last name: ");
    scanf("%s", last);

    strcpy(full, first);
    strcat(full, last);

    int len = strlen(full);

    printf("Full name: %s\n", full);
    printf("Reversed name: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", full[i]);
    }
    return 0;
}

