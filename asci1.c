#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch ;
    printf("Enter Anything :");
    scanf("%c",&ch);
    if(isupper(ch))
    printf("Capital letter");
    else if(islower(ch))
    printf("Small letter");
    else if(isdigit(ch))
    printf("Digit");
    else 
    printf("Special symbol");
    return 0;
}