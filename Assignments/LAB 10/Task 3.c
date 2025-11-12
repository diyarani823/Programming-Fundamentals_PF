#include <stdio.h>

struct phone {
    int area;
    int exchange;
    int number;
};

int main(void) {
    struct phone my = {212, 767, 8900};
    struct phone yours;

    printf("Enter area code: ");
    scanf("%d", &yours.area);
    printf("Enter exchange: ");
    scanf("%d", &yours.exchange);
    printf("Enter number: ");
    scanf("%d", &yours.number);

    printf("\nMy number is (%03d) %03d-%04d\n", my.area, my.exchange, my.number);
    printf("Your number is (%03d) %03d-%04d\n", yours.area, yours.exchange, yours.number);
    return 0;
}

