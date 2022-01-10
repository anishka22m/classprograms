#include <stdio.h>
#include <math.h>
void main()
{
    float F, i , P, n , r,x,y,totalamt;
    printf("Enter the principal amount:\n");
    scanf("%f",&P);
    printf("Enter Rate of interest:\n");
    scanf("%f",&r);
    printf("enter the number of years:\n");
    scanf("%f",&n);
    i=r/100;
    x=(1+i);
    y=pow(x,n);
    F=P*(y-1);
    totalamt=P+F;
    printf("Compound interest is %f\n",F);
    printf("Total amount is %f",totalamt);
}