#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.142
void main()
{
    float r,area;
    printf("Enter radiius of the circle");
    scanf("%f",&r);
    area=PI*pow(r,2);
    printf("area of circle is %f",area);
}