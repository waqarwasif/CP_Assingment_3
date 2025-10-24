#include <stdio.h>

// Function to print a rectangle of stars
void Rectangle(int s1, int s2)
{
    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            printf("*");
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

    printf("\nRectangle pattern:\n");
    Rectangle(rows, cols);

    return 0;
}