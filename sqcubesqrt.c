#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int x,s,c,sqr;
    printf("enter a number for it's square, cube and squrare root");
    scanf("%d",&x);
    s=pow(x,2);
    c=pow(x,3);
    sqr=sqrt(x);
    printf("the sqaure is %d \n",s);
    printf("the cube is %d \n",c);
    printf("the square root is %d \n",sqr);

}