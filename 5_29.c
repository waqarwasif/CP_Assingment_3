// Lowest Common Multiple) The lowest common multiple (LCM) of two integers is the smallest
// positive integer that is a multiple of both numbers.Write a function lcm that returns the lowest
// common multiple of two numbers.

#include <stdio.h>

int LCM(int a, int b)
{
    int multiple;

    for (int i = 1;; i++)
    {
        multiple = a * i;

        if (multiple % b == 0)
        {
            printf("LCM is %d\n", multiple);
            return multiple;
        }
    }
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    LCM(num1, num2);

    return 0;
}