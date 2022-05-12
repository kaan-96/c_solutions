#include <stdio.h>

int main(void)
{
    // Program written from scratch rather than a "minimum necessary" rewrite of upc.c.
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, even_sum, odd_sum, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    even_sum = i2 + i4 + i6 + i8 + i10 + i12;
    odd_sum = i1 + i3 + i5 + i7 + i9 + i11;
    total = (3 * even_sum + odd_sum - 1) % 10;

    printf("Check digit: %d", 9 - total);

    return 0;
}