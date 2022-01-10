#include <stdio.h>
#include <conio.h>
void main()
{
    int len, brd, area;
    printf("Enter length of rectangle");
    scanf("%d", &len);
    printf("Enter breadth of rectangle");
    scanf("%d", &brd);
    printf("numbers are %d and %d \n", len, brd);
    area = len * brd;
    printf("area is %d", area);
    getch();
    }