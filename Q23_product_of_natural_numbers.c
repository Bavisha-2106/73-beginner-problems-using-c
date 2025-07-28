#include <stdio.h>

int main() {
    int n, product;

    printf("Enter value of n: ");
    scanf("%d", &n);

    product = 1;

    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    printf("The product of the first %d natural numbers is %d.\n", n, product);

    return 0;
}