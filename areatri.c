#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float a, b, c, s,p,A;
    printf("Enter side a,b and c");
    scanf("%f %f %f", &a, &b, &c);
    s=(a+b+c)/2;
    p=s*(s-a)*(s-b)*(s-c);
    A=sqrt(p);
    printf("Area is %f", A);
    getch();
    
}