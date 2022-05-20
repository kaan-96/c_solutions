#include <stdio.h>

int main(void) {
    int n;

    printf("Enter numerical grade: ");
    scanf("%d", &n);

    n /= 10;

    switch (n) {
        case 0: case 1: case 2: case 3: case 4: case 5:
            printf("F"); break;
        case 6:
            printf("D"); break;
        case 7:
            printf("C"); break;
        case 8:
            printf("B"); break;
        case 9: case 10:
            printf("A"); break;
        default:
            printf("Invalid grade"); break;
    }

    return 0;
}