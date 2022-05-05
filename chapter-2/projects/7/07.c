#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a dollar amount: ");
    scanf("%d", &n);

    printf("$20 bills: %d\n", n / 20);

    n = n - 20 * (n / 20);
    printf("$10 bills: %d\n", n / 10);

    n = n - 10 * (n / 10);
    printf(" $5 bills: %d\n", n / 5);

    n = n - 5 * (n / 5);
    printf(" $1 bills: %d", n);

    return 0;
}