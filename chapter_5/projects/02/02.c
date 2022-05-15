#include <stdio.h>

int main(void) {
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    printf("Equivalent 12-hour time: ");

    if (hour < 12)
	    printf("%d:%.2d AM", hour == 0 || 24 ? 12 : hour, minute);
    else
	    printf("%d:%.2d PM", hour == 12 ? 12 : hour - 12, minute);

    return 0;
}