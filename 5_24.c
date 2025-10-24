#include <stdio.h>

// Function to convert USD to Yen
float toYen(float USD)
{
    return USD * 118.87; // conversion rate
}

// Function to convert USD to Euro
float toEuro(float USD)
{
    return USD * 0.92; // conversion rate
}

int main()
{
    float USD;

    printf("Enter amount in USD: ");
    scanf("%f", &USD);

    printf("\nUSD\t\tYen\t\tEuro\n");
    printf("%.2f\t\t%.2f\t\t%.2f\n", USD, toYen(USD), toEuro(USD));

    return 0;
}