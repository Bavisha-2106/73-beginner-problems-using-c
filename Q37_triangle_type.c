#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral Triangle.\n");
        } else if (a != b && b != c && a != c) {
            printf("Scalene Triangle.\n");
        } else {
            printf("Isosceles Triangle.\n");
        }
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}