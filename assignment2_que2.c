#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    if(a>0)
    printf("The number is positive");
    else if(a<0)
    printf("Number is negative");
    else
    printf("Number is zero");
    return 0;
}