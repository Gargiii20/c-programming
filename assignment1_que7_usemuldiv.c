#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swappning the numbers are :\n a=%d\n b=%d \n",a,b);
    return 0;
}