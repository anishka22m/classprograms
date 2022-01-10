#include <stdio.h>
void main()
{
    int i,j,max;
    printf("enter 2 numbers\n");
    scanf("%d %d",&i,&j);
    max=(i>j)? printf("%d",i) : printf("%d",j);
}