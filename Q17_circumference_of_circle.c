#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    float radius, circumference;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    circumference = 2 * M_PI * radius;

    printf("The circumference of the circle is %.2f.\n", circumference);

    return 0;
}