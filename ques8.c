#include <stdio.h>
void main()
{
    char x;
    printf("enter a character:\n");
    scanf("%c",&x);
    if (x>=65 && x<=90)
    
    printf("%c is a capital alphabet",x);
    
    if (x>=97 && x<=122)
    
    printf("%c is a small alphabet",x);
    

    if (x>=48 && x<=57)
    
    printf("%c is a number",x);
    


}