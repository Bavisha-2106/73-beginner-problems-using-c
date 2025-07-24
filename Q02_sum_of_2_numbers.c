#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter two numbers (separated by a space): ");
    scanf("%f%f", &num1, &num2);

    printf("The sum of %.2f and %.2f is %.2f",  num1, num2, num1 + num2);

    return 0;
}