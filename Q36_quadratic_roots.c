#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2;

    printf("Enter a, b, c of ax^2 + bx + c = 0: ");
    scanf("%f%f%f", &a, &b, &c);

    d = pow(b, 2) - 4*a*c;

    if (a == 0) {
        printf("This not a quadratic equation.\n");
    } else if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots are %.2f and %.2f.\n", x1, x2);
    } else if (d == 0) {
        x1 = x2 = -b / (2 * a);
        printf("The roots are %.2f and %.2f.\n", x1, x2);
    } else {
        printf("Complex roots.\n");
    }

    return 0;
}