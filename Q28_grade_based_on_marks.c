#include <stdio.h>

int main() {
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark > 100 || mark < 0) {
        printf("Invalid marks.\n");
    }else if (mark >= 90) {
        printf("Your grade is 'O'.\n");
    } else if (mark >= 80) {
        printf("Your grade is 'A'.\n");
    } else if (mark >= 70) {
        printf("Your grade is 'B'.\n");
    } else if (mark >= 60) {
        printf("Your grade is 'C'.\n");
    } else if (mark >= 50) {
        printf("Your grade is 'D'.\n");
    } else {
        printf("Your grade is 'F'.\n");
    }

    return 0;
}