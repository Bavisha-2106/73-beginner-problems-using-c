#include <stdio.h>

int main() {
    float temp, temp_fahrenheit;

    printf("Enter temperature in celsius: ");
    scanf("%f", &temp);

    temp_fahrenheit = (temp*9/5) + 32;

    printf("Temperature in fahrenheit is %.2f", temp_fahrenheit);

    return 0;
}