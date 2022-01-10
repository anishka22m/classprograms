#include <stdio.h>
void main()
{
    int num,i;
    for(i=1;i<=10;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&num);
        if (num<0)
        {
            printf("negative number\n");
            break;
        }
        printf("Square of %d is %d\n",num,num*num);
    }
    
}