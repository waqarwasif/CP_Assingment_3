#include <stdio.h>

// Function to check if three sides can form a triangle
double value8(double s1, double s2, double s3)
{
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1)
    {
        double area = (s1 * s2) / 2;
        return area;
    }
    else
    {
        printf("Not a triangle");
        return 0;
    }
}

int main()
{
    double area1 = value8(3, 4, 5);
    double area2 = value8(5, 12, 13);
    double area3 = value8(8, 15, 17);

    printf("Area 1: %lf\n", area1);
    printf("Area 2: %lf\n", area2);
    printf("Area 3: %lf\n", area3);

    return 0;
}