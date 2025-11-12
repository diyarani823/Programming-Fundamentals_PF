#include <stdio.h>

typedef struct {
    double re;
    double im;
} Complex;

Complex readComplex(const char *label) {
    Complex z;
    printf("Enter %s (real imag): ", label);
    scanf("%lf %lf", &z.re, &z.im);
    return z;
}

void writeComplex(const char *label, Complex z) {
    printf("%s = %.2f %c %.2fi\n", label, z.re, (z.im < 0 ? '-' : '+'),
           (z.im < 0 ? -z.im : z.im));
}

Complex add(Complex a, Complex b) {
    Complex c = { a.re + b.re, a.im + b.im };
    return c;
}

Complex multiply(Complex a, Complex b) {
    Complex c = { a.re*b.re - a.im*b.im, a.re*b.im + a.im*b.re };
    return c;
}

int main(void) {
    Complex z1 = readComplex("z1");
    Complex z2 = readComplex("z2");

    writeComplex("z1", z1);
    writeComplex("z2", z2);

    Complex sum  = add(z1, z2);
    Complex prod = multiply(z1, z2);

    writeComplex("z1 + z2", sum);
    writeComplex("z1 * z2", prod);
    return 0;
}

