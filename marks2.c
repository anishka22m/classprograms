#include <stdio.h>
#include <conio.h>
void main()
{
    int marks;
    printf("Enter marks out of 100");
    scanf("%d",&marks);
    if (marks >= 50)
    {
        printf("pass");
    }
    else 
    {
        printf("fail");
    }

}