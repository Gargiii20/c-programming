#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter side 1 of the triangle: ");
    scanf("%d",&s1);
    printf("Enter side 2 of the triangle: ");
    scanf("%d",&s2);
    printf("Enter side 3 of the triangle: ");
    scanf("%d",&s3);

    if((s1+s2)>s3 && (s2+s3)>s1 && (s1+s3)>s2)
    printf("Triangle is valid");
    else
    printf("Triangle is not valid");

    return 0;
}