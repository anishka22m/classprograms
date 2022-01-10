#include <stdio.h>
void main()
{
    int n,i,j,m=0,check=0,sum=0;  
    j=2; 
    while (i<10)
    {
        m=i/2;
        while (j<=m)
        {   i++;
            if (i%j==0) 
            {
                check=1;
            }

            if (check==0)
            {
                sum=sum+i;
            }

        }
    }
    printf("%d",sum);
}