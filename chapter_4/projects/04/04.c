#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    // The denominators 4096, 512 and 64 represent repeated divisions by 8.
    printf("In octal, your number is: %d%d%d%d%d",
            (n / 4096) % 8,
            (n / 512) % 8,
            (n / 64) % 8,
            (n / 8 ) % 8,
            (n % 8));

    return 0;
}