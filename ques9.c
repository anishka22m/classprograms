#include <stdio.h>
void main()
{
    long long int n,m,counter,r;
    counter=0;
    printf("Enter your number:\n");
    scanf("%lld",&n);
    m=n;
    while (n>0)
    {
        n=n/10;
        counter++;
    }
    printf("number of digits in %lld are %lld",m,counter);
}