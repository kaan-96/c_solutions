#include <stdio.h>

int main(void)
{
    int d;

    printf("Enter a two-digit number: ");
    scanf("%2d", &d);

    printf("The reversal is: %d%d",
            (d % 10),
            (d / 10));

    return 0;
}