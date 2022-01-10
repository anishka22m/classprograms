#include <stdio.h>
void main()
{
    int n,str1,str2,r,rev,L;
    printf("Enter your number:\n");
    scanf("%d",&n);
    str1=n;
    str2=n;
    L=n%10;
    rev=0;
    while (str1>0)
    {
        r=str1%10;
        rev=rev*10+r;
        str1=str1/10;
    }
    printf("The last digit is %d\nThe first digit is %d\nThe new number created by swapping first and last digit is %d", L,r,rev);

}