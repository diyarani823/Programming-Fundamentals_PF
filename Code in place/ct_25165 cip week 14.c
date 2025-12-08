#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b1;

    // Assign values
    strcpy(b1.title, "Programming Fundamentals");
    strcpy(b1.author, "Diya Rani");
    b1.price = 999.50;

    // Print
    printf("Book Details:\n");
    printf("Title: %s\n", b1.title);
    printf("Author: %s\n", b1.author);
    printf("Price: %.2f\n", b1.price);

    return 0;
}

