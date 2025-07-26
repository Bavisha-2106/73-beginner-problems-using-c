#include <stdio.h>

int main() {
    int dividend, divisor, remainder;

    printf("Enter the dividend and divisor: ");
    scanf("%d%d", &dividend, &divisor);
    
    remainder = dividend % divisor;

    printf("The remainder is %d.\n", remainder);

    return 0;
}