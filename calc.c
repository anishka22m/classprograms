#include <stdio.h>
#include <conio.h>
void main()
{
    int X, Y , sum, diff, div, product;
    printf("Enter X and Y:");
    scanf("%d %d", &X , &Y);
    sum= X+Y;
    diff=X-Y;
    div=X/Y;
    product=X*Y;
    printf("sum is %d \n", sum);
    printf("difference is %d \n", diff);
    printf("division is %d \n", div);
    printf("product is %d \n", product);
    getch();

}