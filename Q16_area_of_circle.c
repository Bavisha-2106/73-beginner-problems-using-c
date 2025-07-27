#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = M_PI * radius * radius;

    printf("The area of the circle is %.2f.\n", area);

    return 0;
}