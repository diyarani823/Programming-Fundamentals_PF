#include<stdio.h>
int main()
{
    int a = 8, b = 13, x = 0, y = 10;
    int k;  // k must be declared
    for (k = --a; k < b; k++)  // a is decremented first, so a becomes 7
    {
        x = x + k;
        y = y - x--;
    }
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

