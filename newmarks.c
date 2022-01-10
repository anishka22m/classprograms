#include <stdio.h>
#include <conio.h>
void main()
{
    float m, per;
    printf("your marks in C prog theory out of 25\n");
    scanf("%f",&m);
    per=(m/25)*100;
    if (per >= 90)
    {
        printf("excellent");

    }
}