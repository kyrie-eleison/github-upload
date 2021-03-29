#include <stdio.h>

double average(double a, double b, double c) {
    return (a + b + c) / 3;
}

int main(void) {

    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    printf("%g\n", average(a, b, c));

    return 0;
}