#include <stdio.h>
#include <math.h>

// Function to calculate hypotenuse
double hypotenuse(double side1, double side2)
{
    return sqrt(side1 * side1 + side2 * side2);
}

int main()
{
    double hyp1 = hypotenuse(3.0, 4.0);
    double hyp2 = hypotenuse(5.0, 12.0);
    double hyp3 = hypotenuse(8.0, 15.0);

    printf("Hypotenuse 1: %.2f\n", hyp1);
    printf("Hypotenuse 2: %.2f\n", hyp2);
    printf("Hypotenuse 3: %.2f\n", hyp3);

    return 0;
}