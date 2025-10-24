#include <stdio.h>

// Function to check if a number is even
int is_Even(int n)
{
    return n % 2 == 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_Even(num))
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    return 0;
}