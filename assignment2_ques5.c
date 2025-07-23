#include<stdio.h>
int main()
{
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num%5==0 && num%7==0){
        printf("%d is dividible by 5 and 7",num);
    }
    else 
        printf("%d is not dividible by 5 and 7",num);
}