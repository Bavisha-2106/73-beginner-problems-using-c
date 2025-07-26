#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f%f", &num1, &num2);

    if (num1 < num2) {
        printf("First number is smaller.\n");
    } else if (num1 > num2) {
        printf("Second number is smaller.\n");
    } else {
        printf("The numbers are equal.");
    }

    return 0;
}