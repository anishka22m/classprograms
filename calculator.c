#include <stdio.h>
void main()
{
    int a,b,choice,result;
    do
    {
        printf("Enter 1 for addition\n");
        printf("Enter 2 for subtraction\n");
        printf("Enter 3 for multiplication\n");
        printf("Enter 4 for division\n");
        printf("Enter 5 to exit\n");
        scanf("%d",&choice);
        if (choice==1)
        {
            printf("Addition\n Enter 2 numbers.\n");
            scanf("%d %d",&a,&b);
            result=a+b;
            printf("Sum is %d\n",result);
            
        }
        else if (choice==2)
        {
            printf("subtraction. Enter 2 numbers\n");
            scanf("%d %d", &a,&b);
            result=a-b;
            printf("The difference is %d\n",result);

        }
        else if (choice==3)
        {
            printf("Multiplication. Enter 2 numbers\n");
            scanf("%d %d",&a,&b);
            result=a*b;
            printf("The product is %d\n",result);
        }
        else if (choice==4)
        {
            printf("Division. Enter 2 numbers\n");
            scanf("%d %d",&a,&b);
            result=a/b;
            printf("The division is %d\n",result);

        }

    }while (choice<5);
}