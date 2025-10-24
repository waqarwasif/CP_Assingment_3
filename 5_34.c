#include <stdio.h>

float power(float base, int exp)
{
    if (exp == 0)
        return 1; // Any number to power 0 = 1
    else if (exp == 1)
        return base; // Base case
    else
        return base * power(base, exp - 1); // Recursive call
}

int main()
{
    float base;
    int exp;

    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    float result = power(base, exp);
    printf("%.2f ^ %d = %.2f\n", base, exp, result);

    return 0;
}