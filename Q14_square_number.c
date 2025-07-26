#include <stdio.h>

int main() {
    int num, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    printf("The square is %d.\n", square);

    return 0;
}