#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf(" %c",&ch);
    ch = tolower(ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case '0':
    case 'u':
        printf("Alphabet is vowel");
        break;
    
    default:printf("Alphabet is consonant");
        break;
    }
    return 0;
}