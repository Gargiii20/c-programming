#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter : ");
    scanf(" %c",&ch);

    if(ch>= 'a' && ch<='z'){
        ch = ch - 32 ;
        printf("Uppercase : %c \n ",ch);
    }
    else if(ch >='A' && ch<='Z'){
        ch = ch + 32 ;
        printf("Lowercase : %c \n ",ch);
    }
    else {
        printf("Invalid letter");
    }
    return 0;
}