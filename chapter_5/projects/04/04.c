#include <stdio.h>

int main(void) {
    int knots;

    printf("Enter wind speed (in knots): ");
    scanf("%f", &knots);

    printf("Wind force: ");

    if (knots < 1)
        printf("Calm.");
    else if (knots <= 3)
        printf("Light air.");
    else if (knots <= 27)
        printf("Breeze.");
    else if (knots <= 47)
        printf("Gale.");
    else if (knots <= 63)
        printf("Storm.");
    else
        printf("Hurricane.");

    return 0;
}