#include <stdio.h>
#define PI 3.14f

int main(void)
{
    float r, v;

    printf("Enter a radius: ");
    scanf("%f", &r);

    v = 4.0f / 3.0f * PI * r * r * r;

    printf("The volume of a sphere with a %.2f-meter radius is %.2f cubic meters.", r, v);

    return 0;
}