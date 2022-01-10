#include <stdio.h>
void main()
{
    int no,m,i;
    printf("Enter your number\n");
    scanf("%d",&no);
    m=no-1;
    for (i=2;i<=m;i++)
    {
        if (no%i==0) printf("%d is a factor\n",i);
        else break;
    }
}