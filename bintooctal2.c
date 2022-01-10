#include <stdio.h>
#include <math.h>
void main()
{
    long long int n,m,counter,r;
    int no,r1,str1,decimal,i,x;
    counter=0;
    printf("Enter your binary number:\n");
    scanf("%lld",&n);
    str1=n;
    m=n;
    while (n>0)
    {
        n=n/10;
        counter++;
    }
    printf("number of digits in %lld are %lld\n",m,counter);
    i=0;
    decimal=0;
    while (str1>0)
    {
        r1=str1%10;
        x=r1*pow(2,i);
        decimal=decimal+r1*x;
        i++;
        str1=str1/10;

    }
    printf("decimal number is %d\n",decimal);
    int rem,str2,octal,j;
    str2=decimal;
    octal=0;
    j=1;
    while (decimal>0)
    {
        rem=decimal%8;
        octal=(pow(10,j-1)*rem)+octal;
        j++;
        decimal=decimal/8;
    }
    printf("the octal number is %d",octal);
}