#include <stdio.h>

// Function to print a solid rectangle
void Rectangle(int side1, int side2, char fillChar)
{
    for (int i = 1; i <= side1; i++)
    {
        for (int j = 1; j <= side2; j++)
        {
            printf("%c", fillChar);
        }
        printf("\n");
    }
}

// Function to print a right-angled triangle
void RAT(int s1, int s2)
{
    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            if (j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print an inverted right-angled triangle
void invRAT(int s1, int s2)
{
    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            if (j > i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nRectangle:\n");
    Rectangle(rows, cols, '#');

    printf("\nRight-angled Triangle:\n");
    RAT(rows, cols);

    printf("\nInverted Right-angled Triangle:\n");
    invRAT(rows, cols);

    return 0;
}