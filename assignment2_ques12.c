#include<stdio.h>
int main()
{
    int number1,number2,number3;
    printf("Enter number 1: ");
    scanf("%d",&number1);
    printf("Enter number 2: ");
    scanf("%d",&number2);
    printf("Enter number 3: ");
    scanf("%d",&number3);

    if(number1 > number2 && number1 > number3)
    {
        printf("%d is max",number1);
    }
    else if(number2 > number1 && number2 > number3)
    {
        printf("%d is max",number2);
    }
    else 
    printf("%d is max",number3);
    return 0;
}