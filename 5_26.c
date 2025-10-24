#include <stdio.h>

// Function to calculate sum of divisors and print them
int isPerfect(int num)
{
    int sum = 1; // 1 is always a divisor

    printf("Divisors of %d: 1 ", num);

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum of divisors = %d\n", sum);

    if (sum == num)
        return 1; // Perfect number
    else
        return 0; // Not perfect
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfect(number))
        printf("%d is a Perfect Number.\n", number);
    else
        printf("%d is NOT a Perfect Number.\n", number);

    return 0;
}