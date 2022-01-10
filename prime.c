#include <stdio.h>
void main()
{
    int no,m,i,flag;
    printf("Enter your number\n");
    scanf("%d",&no);
    m=no-1;
    flag=0;
    for (i=2;i<=m;i++)
    {
        if (no%i==0) flag=1;
    }
    if (flag==0) printf("the number %d is prime",no);
    else printf("The number %d is not prime",no);
}