#include <stdio.h>

int main() {
    int num, sum, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = 0;

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (num == sum) {
        printf("%d is a perfect number.", num);
    } else {
        printf("%d is not a perfect number.", num);
    }

    return 0;
}