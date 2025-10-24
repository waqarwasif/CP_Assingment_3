#include <stdio.h>

// Function to print a rectangle using a fill character
void Rectangle(int s1, int s2, char fillCharacter)
{
    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            printf("%c", fillCharacter);
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter a character to fill the rectangle: ");
    scanf(" %c", &ch); // space before %c is important to skip newline

    printf("\nRectangle pattern:\n");
    Rectangle(rows, cols, ch);

    return 0;
}