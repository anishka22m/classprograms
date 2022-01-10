#include <Stdio.h>
void main()
{
    int n,i,count;
    printf("Enter a number:\n");
    scanf("%d",&n);
    i=n;
    count=0;
    while (n>0)
    {
        n=n/10;
        count++;
    }
    printf("The number of digits in %d are %d",i,count);
}
