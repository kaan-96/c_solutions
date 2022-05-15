#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Assuming n has no more than four digits.
    if (-10 < n && n < 10)
        printf("The number %d has 1 digit", n);
    else if (-100 < n && n < 100)
        printf("The number %d has 2 digits", n);
    else if (-1000 < n && n < 1000)
        printf("The number %d has 3 digits", n);
    else
        printf("The number %d has 4 digits", n);

    return 0;
}