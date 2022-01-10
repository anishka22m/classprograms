#include <stdio.h>
void main()
{
    float bs,da,ha,gs;
    printf("Enter basic salary:\n");
    scanf("%f",&bs);
    da=0.4*bs;
    ha=0.2*bs;
    gs=bs+da+ha;
    printf("Gross salary is:\n%f",gs);
}
