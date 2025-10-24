#include <stdio.h>

// Function to check if it's a right triangle
int isRightTriangle(int a, int b, int c)
{
    // Check using Pythagoras theorem
    if (a * a + b * b == c * c)
        return 1;
    if (a * a + c * c == b * b)
        return 1;
    if (b * b + c * c == a * a)
        return 1;
    return 0;
}

int main()
{
    int s1, s2, s3;

    printf("Enter the three sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (isRightTriangle(s1, s2, s3))
    {
        printf("Forms a Right-Angled Triangle ✅\n");
    }
    else
    {
        printf("Does NOT form a Right-Angled Triangle ❌\n");
    }

    return 0;
}