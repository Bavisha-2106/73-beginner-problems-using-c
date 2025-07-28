#include <stdio.h>
#include <ctype.h>

int main() {
    char ch, lower_ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    lower_ch = tolower(ch);

    if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}