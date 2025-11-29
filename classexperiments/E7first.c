
#include <stdio.h>

typedef struct {
    double real;
    double imag;
} Complex;

int readComplex(Complex *c)
{
    if (!c) return 0;
    printf("Enter real and imaginary parts (space separated): ");
    return scanf("%lf %lf", &c->real, &c->imag) == 2;
}

void writeComplex(const Complex *c)
{
    if (!c) return;
    if (c->imag < 0)
        printf("%.6g - %.6gi", c->real, -c->imag);
    else
        printf("%.6g + %.6gi", c->real, c->imag);
}

Complex addComplex(Complex a, Complex b)
{
    Complex r = { a.real + b.real, a.imag + b.imag };
    return r;
}

Complex subComplex(Complex a, Complex b)
{
    Complex r = { a.real - b.real, a.imag - b.imag };
    return r;
}

int main(void)
{
    Complex x, y;
    if (!readComplex(&x)) {
        printf("Invalid input for first complex number.\n");
        return 1;
    }
    if (!readComplex(&y)) {
        printf("Invalid input for second complex number.\n");
        return 1;
    }

    printf("First complex  : "); writeComplex(&x); printf("\n");
    printf("Second complex : "); writeComplex(&y); printf("\n");

    Complex s = addComplex(x, y);
    Complex d = subComplex(x, y);

    printf("Sum            : "); writeComplex(&s); printf("\n");
    printf("Difference     : "); writeComplex(&d); printf("\n");

    return 0;
}
