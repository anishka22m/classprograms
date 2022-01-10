#include <stdio.h>
void main()
{
    int a,b,sum,prod,div,diff,i;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    printf("Enter 1 for sum, 2 for difference, 3 for product and 4 for division");
    scanf("%d",&i);
    switch (i)
    {
        case 1:
        
            sum=a+b;
            printf("Sum = %d",sum);
            break;
        
        case 2:
        
            diff=a-b;
            printf("Difference = %d",diff);
            break;
        
        case 3:
        
            prod=a*b;
            printf("Product = %d",prod);
            break;
        
        case 4:
        
            div=a/b;
            printf("Division = %d",div);
            break;
        
        default:
        printf("exit");
    }
}