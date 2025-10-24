#include <stdio.h>

void RootCheck(int a, int b, int c)
{
    int d = (b * b) - (4 * a * c); // Discriminant

    if (d > 0)
    {
        printf("Roots are real, distinct and rational.\n");
    }
    else if (d == 0)
    {
        printf("Roots are real, equal and rational.\n");
    }
    else
    {
        printf("Roots are imaginary or complex.\n");
    }
}

int main()
{
    int a, b, c;

    printf("Enter coefficients a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    RootCheck(a, b, c);

    return 0;
}