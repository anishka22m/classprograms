#include <Stdio.h>
void main()
{
    int n,i,prod,m;
    printf("Enter a 3 digit number:\n");
    scanf("%d",&n);
    i=n;
    prod=1;
    if (n>=100 && n<=999)
    {
        while (n>0)
        {
            m=n%10;
            prod*=m;
            n=n/10;
        }
        printf("The product of digits of %d is %d",i,prod);
    }
    else
    printf("the number is not 3 digits. Please enter correct number,");
}
