#include <stdio.h>

int main(void) {
    float n;

    printf("Enter an amount: ");
    scanf("%f", &n);

    printf("With tax added: %.2f", n * 1.05);

    return 0;
}