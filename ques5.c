#include <stdio.h>
#include <ctype.h>
void main()
{
    char x,v;
    printf("Enter a character:\n");
    scanf("%c",&x);
    v=toupper(x);
    v==65 || v==69 || v==73 || v==79 || v==85? printf("%c is a vowel",v) : printf("%c is not a vowel",v);
    
}