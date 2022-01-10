#include <Stdio.h>
#include <math.h>
void main()
{
    int B,exp,sum,num,str,rem;
    printf("Enter base and power to generate a number:\n");
    scanf("%d %d",&B,&exp);
    num=pow(B,exp);
    str=num;
    sum=0;
    while (num!=0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    printf("The sum of digits of the number generated %d is %d",str,sum);
}