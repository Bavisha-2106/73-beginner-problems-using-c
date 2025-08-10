#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is vaild.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}