#include <stdio.h>

int main(void) {
    int a, b, c, d, max1, min1, max2, min2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max1 = a >= b ? a : b;
    min1 = a <= b ? a : b;

    max2 = c >= d ? c : d;
    min2 = c <= d ? c : d;

    printf("Largest: %d\n", max1 >= max2 ? max1 : max2);
    printf("Smallest: %d", min1 <= min2 ? min1 : min2);

    return 0;
}