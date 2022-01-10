#include <stdio.h>
void main()
{
    long long int i,sum;
    i=3;
    sum=2;
    while (i<9)
    {
        if (i%2!=0)
        {
            sum=sum+i;
            i++;
        }
    }
    while (i>9 && i<2000000)
    {
        if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 && i%9!=0)
        {
            sum=sum+i;
            i++;
        }
    }
    printf("Sum of primes upto 2 milliom is %lld",sum);
}