#include <stdio.h>

void volumeCal(int h, int a) {
    float volume = (a * a * h) / 3.0;
    printf("Volume of pyramid = %.2f\n", volume);
}

void getData() {
    int h, a;
    printf("Enter height: ");
    scanf("%d", &h);
    printf("Enter base: ");
    scanf("%d", &a);
    volumeCal(h, a);
}

int main() {
    getData();
    return 0;
}

