#include<stdio.h>
int main()
{
    char ch ;
    printf("Entwr lowercase letter : ");
    scanf(" %c",&ch);

    if(ch >= 'a' && ch <= 'z')
    {
        if (ch=='a'||ch=='e'|| ch=='i'||ch=='o'||ch=='u'){
            printf(" %c is a vowel\n",ch);
        }
        else{
            printf("%c is a consonant",ch);
        }
    }
    else
    {
        printf("Invalid input . Please enter lower letters");
    }
    return 0;
}