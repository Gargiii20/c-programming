#include<stdio.h>
int main()
{
    int a ,b,c;

    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    printf("Enter number 3: ");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            printf("% is max",&a);
        }
        else{
            printf("%d is max",c);
        }
    }
    else {
        if(b>c){
            printf("%d is max",b);
        }
        else{
            printf("%d is max",c);
        }
    }
    return 0;
}