#include <stdio.h>

int main() {
    char ch;
    int ascii_value;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ascii_value = ch;

    printf("The ASCII value of %c is %d.\n", ch, ascii_value);

    return 0;
}