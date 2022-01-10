#include <stdio.h>
#include <conio.h>
void main()
{
    float tc,tf,F,C;
    printf("Enter temperature in Celsius");
    scanf("%f",&tc);
    F=((9*tc)/5)+32;
    printf("this is the temperature in Farheineit %f \n",F);
    printf("Enter temperature in Farheineit");
    scanf("%f",&tf);
    C=((tf-32)*5)/9;
    printf("this is temperature in celsius %f",C);


}