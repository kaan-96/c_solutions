#include <stdio.h>

int main(void)
{
    int d;

    printf("Enter a three-digit number: ");
    scanf("%3d", &d);

    printf("The reversal is: %d%d%d", d % 10, (d % 100) / 10, d / 100);

    return 0;
}