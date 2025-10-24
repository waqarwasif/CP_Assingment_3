#include <stdio.h>

// Function to calculate rental charges
float carRental(int hours)
{
    float minFee = 25.0;   // base fee
    float hourlyFee = 5.0; // fee per hour
    float dailyFee = 50.0; // fee per 24 hours
    float charges;

    if (hours <= 24)
    {
        // For rentals within a day
        charges = minFee + (hours * hourlyFee);
    }
    else
    {
        // For rentals longer than 24 hours
        int days = hours / 24;
        int remainingHours = hours % 24;
        charges = (days * dailyFee) + (remainingHours * hourlyFee);
    }

    return charges;
}

// Main function
int main()
{
    int h1, h2, h3;

    printf("Enter hours for three customers: ");
    scanf("%d %d %d", &h1, &h2, &h3);

    float c1 = carRental(h1);
    float c2 = carRental(h2);
    float c3 = carRental(h3);

    printf("\n------------------------------------------\n");
    printf("Car\tHours\tCharges ($)\n");
    printf("------------------------------------------\n");
    printf("1\t%d\t%.2f\n", h1, c1);
    printf("2\t%d\t%.2f\n", h2, c2);
    printf("3\t%d\t%.2f\n", h3, c3);
    printf("------------------------------------------\n");
    printf("Total\t\t%.2f\n", c1 + c2 + c3);
    printf("------------------------------------------\n");

    return 0;
}