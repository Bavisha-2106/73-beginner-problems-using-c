#include <stdio.h>

int main() {
    float principleAmount, annualRate, finalAmount;
    int time;

    printf("Enter the principle amount: ");
    scanf("%f", &principleAmount);

    printf("Enter the rate of interest: ");
    scanf("%f", &annualRate);

    printf("Enter time period in years: ");
    scanf("%d", &time);

    finalAmount = (principleAmount * annualRate * time) / 100;

    printf("The final amount is %.2f", finalAmount);

    return 0;
}