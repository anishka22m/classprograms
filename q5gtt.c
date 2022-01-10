# include <stdio.h>
# include <math.h>
# include <stdbool.h>
int main()
{
    long long int i=3;
   unsigned long long int ans=2;
   int flag =1;
   long int j;
   while(i<2000000)
   {
       for(j=2;j<=sqrt(i);j++)
       {
           if(i%j==0)
           {
               flag=0;
               break;
           }
       }
       if(flag==1)
           ans+=i;
           flag=1;
           i+=2;
   }
   printf("output->%lld",ans);
    
    
    return 0;
}