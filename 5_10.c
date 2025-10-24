#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    int count;

    printf("How many numbers to round? ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++)
    {
        printf("\nEnter number %d: ", i);
        scanf("%lf", &x);

        // Proper rounding formula
        y = ceil(x + 0.5);

        printf("Original: %.2f, Rounded: %.0f\n", x, y);
    }

    return 0;
}