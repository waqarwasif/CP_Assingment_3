#include <stdio.h>

// Function to convert time into total seconds
int timeToSecond(int hr, int min, int sec)
{
    int totSec;
    if (hr == 12)
        totSec = min * 60 + sec;
    else
        totSec = hr * 3600 + min * 60 + sec;

    return totSec;
}

int main()
{
    int t1, t2, diff;

    // Example times
    t1 = timeToSecond(2, 15, 30);
    t2 = timeToSecond(3, 45, 50);

    diff = t2 - t1;
    diff = (diff < 0) ? -diff : diff; // absolute value

    printf("Time difference in seconds = %d\n", diff);

    return 0;
}