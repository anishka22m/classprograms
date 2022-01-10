#include <stdio.h>
#define PI 3.14
void main()
{
    float r,d,c,a;
    printf("Enter radius of the circle\n");
    scanf("%f",&r);
    d=2*r;
    c=2*PI*r;
    a=PI*(r*r);
    printf("Diameter is %f \n Circumfrence is %f \n Area is %f", d,c,a);
}