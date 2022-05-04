#include <stdio.h>
#define PI 3.14f

int main(void)
{
    float r = 10.0f, v = 4.0f / 3.0f * PI * r * r * r;

    printf("The volume of a sphere with a 10-meter radius is %.2f cubic meters.", v);

    return 0;
}