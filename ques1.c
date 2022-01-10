#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,x,y,D;
    printf("for ax^2+bx+c, enter a,b and c:\n");
    scanf("%f %f %f", &a,&b,&c);
    D=(b*b)-4*a*c;
    if (D>=0)
    {
        printf("real roots exist\n");
        x=(-b + sqrt(D))/(2*a);
        y=(-b - sqrt(D))/(2*a);
        printf("roots are %f and %f",x,y);

    }
    else
    {
        printf("no real roots");
    }


}