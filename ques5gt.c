#include <stdio.h>
void main()
{
    long long int i,n;
    n=2520;
    i=11;
    while (i<=20)
    {
        if (n%i==0)
        {
            i++;
        }
        else
        {
            n=n+2520;
        }
    
    }
    printf("%lld",n);
}