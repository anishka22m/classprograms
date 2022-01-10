#include <stdio.h>
void main()
{
    long long int fac,i,no;
    printf("Enter the number to generate factorial");
    scanf("%lld",&no);
    fac=1;
    for(i=1;i<=no;i++)
    {
        fac=fac*i;
    }
    printf("The factorial of %lld is %lld",no,fac);
}