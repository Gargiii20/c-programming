#include<stdio.h>
int main()
{
    int number1,number2,number3,max;
    printf("Enter number 1: ");
    scanf("%d",&number1);
    printf("Enter number 2: ");
    scanf("%d",&number2);
    printf("Enter number 2: ");
    scanf("%d",&number3);

    max = (number1>number2) ? ((number1>number3)?number1:number3) :((number2>number3)?number2:number3);
    //     (Condition)      ?            condition is true        :        condition is false    
    printf("%d is max \n",max);
    return 0;
}