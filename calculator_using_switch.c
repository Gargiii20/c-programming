#include <stdio.h>
int main() 
{
    int a,b,ch;
    printf("\n1.Addition \n2.Substraction \n3.Multiplication \n4.Division \nEnter Choice :");
    scanf("%d",&ch);
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    switch (ch)
    {
    case 1: printf("Addition of two number is %d",(a+b));
        break;
    case 2: printf("Substraction of two number is %d",(a-b));
        break;
    case 3: printf("Multiplication of two number is %d",(a*b));
        break;
    case 4: printf("Division of two number is %d",(a/b));
        break;
    
    default: printf("Invalid Choice");
        break;
    }
    return 0;
}