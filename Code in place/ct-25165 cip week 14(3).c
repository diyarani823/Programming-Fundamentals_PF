#include <stdio.h>

union Test {
    int x;
    float y;
    char z;
};

int main() {
    union Test u;

    u.x = 100;
    printf("After assigning x = 100:\n");
    printf("x = %d\n", u.x);
    printf("y = %f\n", u.y);
    printf("z = %c\n\n", u.z);

    u.y = 25.5;
    printf("After assigning y = 25.5:\n");
    printf("x = %d\n", u.x);
    printf("y = %f\n", u.y);
    printf("z = %c\n\n", u.z);

    u.z = 'A';
    printf("After assigning z = 'A':\n");
    printf("x = %d\n", u.x);
    printf("y = %f\n", u.y);
    printf("z = %c\n", u.z);

    return 0;
}

