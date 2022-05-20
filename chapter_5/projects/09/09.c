#include <stdio.h>

int main(void) {
    int m1, d1, y1, m2, d2, y2, date1, date2;

    printf("Enter first date: ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    printf("Enter second date: ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    date1 = 100 * y1 + 10 * m1 + d1;
    date2 = 100 * y2 + 10 * m2 + d2;

    if (date1 < date2)
        printf("%d/%d/%d is earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
    else
        printf("%d/%d/%d is earlier than %d/%d/%d", m2, d2, y2, m1, d1, y1);

    return 0;
}