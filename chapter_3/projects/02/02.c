#include <stdio.h>

int main(void) {
    int item, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\t\t\tUnit\t\t\tPurchase\n\t\t\tPrice\t\t\tDate\n");
    printf("%d\t\t\t$%7.2f\t\t%.2d/%.2d/%d", item, unit_price, month, day, year);

    return 0;
}