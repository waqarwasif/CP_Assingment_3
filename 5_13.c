#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // seed random number generator

    int n;

    // a) 1 to 6
    n = 1 + rand() % 6;
    printf("a) %d\n", n);

    // b) 100 to 1000
    n = 100 + rand() % 901; // 100 + (0–900)
    printf("b) %d\n", n);

    // c) 0 to 19
    n = rand() % 20;
    printf("c) %d\n", n);

    // d) 1000 to 1222
    n = 1000 + rand() % 223; // 1000 + (0–222)
    printf("d) %d\n", n);

    // e) -1 to 1
    n = -1 + rand() % 3; // -1, 0, or 1
    printf("e) %d\n", n);

    // f) -3 to 11
    n = -3 + rand() % 15; // -3 + (0–14)
    printf("f) %d\n", n);

    return 0;
}