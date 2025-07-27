#include <stdio.h>

int main() {
    double base, result;
    int exponent;

    printf("Enter base and exponent: ");
    scanf("%lf%d", &base, &exponent);

    result = 1;

    if (exponent < 0) {
        for (int i = 0; i < -exponent; i++) {
        result *= base;
        }

        result = 1 / result;
    } else {
        for (int i = 0; i < exponent; i++) {
        result *= base;
        }
    }
    
    printf("%.2lf raised to the power %d is %.2lf.\n", base, exponent, result);

    return 0;
}