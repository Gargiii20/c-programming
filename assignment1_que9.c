#include<stdio.h>
int main()
{
    int amt,ten,five,one;
    printf("Enter amount to withdraw:");
    scanf("%d",&amt);

    ten = amt / 10;
    amt = amt % 10 ;

    five = amt /5;
    amt = amt % 5;

    one = amt ;
    printf("---------Currency notes :---------");
    printf("\n10 rupee notes :                  %d",ten);
    printf("\n5 rupee notes :                   %d",five);
    printf("\n1 rupee notes :                   %d",one);

    return 0;
}