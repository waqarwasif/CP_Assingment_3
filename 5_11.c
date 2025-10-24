#include <stdio.h>
#include <math.h>

// Function to round to integer
int roundToInteger(double n)
{
    return (int)(n + 0.5);
}

// Function to round to tenth
double roundToTenth(double n)
{
    return floor(n * 10 + 0.5) / 10;
}

// Function to round to hundredth
double roundToHundredth(double n)
{
    return floor(n * 100 + 0.5) / 100;
}

// Function to round to thousandth
double roundToThousandth(double n)
{
    return floor(n * 1000 + 0.5) / 1000;
}

int main()
{
    double num;

    printf("Enter a floating-point number: ");
    scanf("%lf", &num);

    printf("\nOriginal: %.4f\n", num);
    printf("Rounded to integer: %d\n", roundToInteger(num));
    printf("Rounded to tenth: %.1f\n", roundToTenth(num));
    printf("Rounded to hundredth: %.2f\n", roundToHundredth(num));
    printf("Rounded to thousandth: %.3f\n", roundToThousandth(num));

    return 0;
}