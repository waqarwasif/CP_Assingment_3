#include <stdio.h>

// Function to find the largest of four numbers
float large(float a, float b, float c, float d)
{
    float arr[4] = {a, b, c, d};
    float max = arr[0];

    for (int i = 1; i < 4; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    float n1, n2, n3, n4;

    printf("Enter four floating-point numbers: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    printf("Largest number = %.2f\n", large(n1, n2, n3, n4));

    return 0;
}