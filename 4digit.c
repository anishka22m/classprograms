#include <Stdio.h>
void main()
{
    int n,i,sum,m;
    printf("Enter a 4 digit number:\n");
    scanf("%d",&n);
    i=n;
    sum=0;
    if (n>=1000 && n<=9999)
    {
        while (n>0)
        {
            m=n%10;
            sum+=m;
            n=n/10;
        }
        printf("The sum of digits of number is %d is %d",i,sum);
    }
    else
    printf("the number is not 4 digit. Please enter correct number.");
    

}