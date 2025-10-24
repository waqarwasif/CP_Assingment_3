#include <stdio.h>
unsigned long long factorial(unsigned int n)
{
    unsigned long long first = 0;
    unsigned long long second = 1;
    unsigned long long nth;
    if (n == 1)
    {
        nth = 0;
    }
    else if (n == 1)
    {
        nth = 1;
    }
    else
    {

        for (int i = 3; i <= n; i++)
        {

            nth = first + second;
            first = second;
            second = nth;
        }
    }

    return nth;
}
int main()
{
    printf("Fibonacci of 8 is: ");
    printf("%llu", factorial(8));
}