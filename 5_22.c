#include <stdio.h>

// Function to find quotient
int quot(int a, int b)
{
    return a / b;
}

// Function to find remainder
int rem(int a, int b)
{
    return a % b;
}

// Function to separate digits
void sep(int num)
{
    if (num <= 1 || num >= 32767)
    {
        printf("Enter number in given range (1-32767)\n");
        return;
    }

    int divisor = 1;
    int temp = num;

    // Find the divisor to extract the first digit
    while (temp >= 10)
    {
        temp = quot(temp, 10);
        divisor *= 10;
    }

    // Print digits one by one
    while (divisor > 0)
    {
        printf("%d  ", quot(num, divisor)); // print current digit
        num = rem(num, divisor);            // remove printed digit
        divisor = quot(divisor, 10);        // move to next digit
    }

    printf("\n");
}

int main()
{
    int num;
    printf("Enter a number (1-32767): ");
    scanf("%d", &num);

    printf("Separated digits: ");
    sep(num);

    return 0;
}