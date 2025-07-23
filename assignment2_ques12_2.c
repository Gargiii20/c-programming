#include<stdio.h>
int main()
{
    int a ,b,c,max;

    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    printf("Enter number 3: ");
    scanf("%d",&c);

    max = a;
    if(b>max)
    max = b;
    if(c>max)
    max =c;
    printf("%d is the maximum number",max);
    return 0;
     
}