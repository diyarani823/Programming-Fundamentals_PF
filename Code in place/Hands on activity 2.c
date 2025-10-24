#include <stdio.h>
int main()
 {
    float watts, kilowatts;
    printf("Enter power in watts: ");
    scanf("%f", &watts);
    kilowatts = watts / 1000.0;
    printf("The power in kilowatts is: %.2f\n", kilowatts);
    return 0;
}

