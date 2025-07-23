#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character : ");
    scanf(" %c",&ch);

    if(ch>=48 && ch<=57){
        printf("It is a Digit \n");
    }
    else if (ch>=65 && ch<=90){
        printf("It is a UpperCase \n");
    }
    else if(ch>=97 && ch<=122){
        printf("It is a LowerCase \n");
    }
    else{
        printf("It is a special character");
    }
    return 0;
}