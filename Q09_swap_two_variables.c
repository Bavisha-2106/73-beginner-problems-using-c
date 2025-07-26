#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter the first and second number: ");
    scanf("%d%d", &num1, &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping:\n Number 1: %d\n Number 2: %d", num1, num2);

    return 0;
}