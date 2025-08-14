#include <stdio.h>

int main() {
    int num, factorial;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial = 1;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is %d.\n", num, factorial);

    return 0;
}