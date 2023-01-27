#include <stdio.h>
#include <math.h>
#define PI 3.142

int main()
{
    float radius, area;

    printf("Enter the radius of a circle \n");
    scanf("%f", &radius);
    area = PI *radius*radius;
    printf("Area of a circle = %f", area);
}
