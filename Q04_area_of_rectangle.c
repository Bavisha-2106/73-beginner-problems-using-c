#include <stdio.h>

int main() {
    float length, width;

    printf("Enter the length and width of the rectangle: ");
    scanf("%f%f", &length, &width);

    printf("The area of the rectangle is %.2f.", length * width);

    return 0;
}