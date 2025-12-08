#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book books[3];
    int i;

    // Input
    for (i = 0; i < 3; i++) {
        printf("Enter title of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].title);

        printf("Enter author of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].author);

        printf("Enter price of book %d: ", i + 1);
        scanf("%f", &books[i].price);

        printf("\n");
    }

    // Output
    printf("\n--- Book List ---\n");
    for (i = 0; i < 3; i++) {
        printf("Book %d:\n", i + 1);
        printf("  Title: %s\n", books[i].title);
        printf("  Author: %s\n", books[i].author);
        printf("  Price: %.2f\n\n", books[i].price);
    }

    return 0;
}

