#include <stdio.h>

int toQualityPoints(float avg)
{
    if (avg >= 90 && avg <= 100)
        return 4;
    else if (avg >= 80 && avg < 90)
        return 3;
    else if (avg >= 70 && avg < 80)
        return 2;
    else if (avg >= 60 && avg < 70)
        return 1;
    else
        return 0;
}

int main()
{
    float average;

    printf("Enter average marks: ");
    scanf("%f", &average);

    int points = toQualityPoints(average);
    printf("Quality Points = %d\n", points);

    return 0;
}