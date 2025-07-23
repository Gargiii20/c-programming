#include<stdio.h>
int main()
{
    int num ;

    printf("Enter the number :");
    scanf("%d",&num);
    
    if(num % 5 ==0 || num % 7 ==0){
        printf("%d is divisible by 5 or 7",num);
    }
    else
        printf("%d is not divisible by 5 or 7",num);
    return 0;
}