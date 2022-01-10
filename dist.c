#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a,b,x,y,sum,d;
    printf("enter co ordinates");
    scanf("%d %d %d %d", &a,&b,&x,&y);
    sum=pow((b-a),2) + pow((x-y),2);
    d=sqrt(sum);
    printf("distance between the 2 points is %d",d);
    getch();   

}