#include<stdio.h>
int main()
{
    float BS ,Tax;

    printf("Enter basic salary of an employee: ");
    scanf("%f",&BS);

    if(BS < 150000){
        Tax = 0;
    }
    else if (BS <= 300000){
        Tax= 0.20*BS;
    }
    else{
        Tax= 0.30*BS;
    }
    printf("Income tax paid by an employee is %.2f",Tax);
    return 0;
}