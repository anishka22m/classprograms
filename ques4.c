#include <stdio.h>
#include <math.h>
#define PI 3.14
void main()
{
    float r,V,A;
    printf("Enter radius of the sphere:\n");
    scanf("%f",&r);
    V=(4*PI*pow(r,3))/3;
    A=4*PI*pow(r,2);
    printf("Volume is %f and Area is %f",V,A);
}