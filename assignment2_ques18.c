#include<stdio.h>
int main()
{
    int late_days,fine;

    printf("Enter number of days the book is returned late: ");
    scanf("%d",&late_days);

    if(late_days <=0){
        fine = 0;
    }
    else if(late_days <= 5){
        fine = late_days*2;
    }
    else if(late_days <=10){
        fine = late_days*5;
    }
    else{
        fine = late_days*10;
    }
    printf("Total fine is %d Rs \n",fine);
    return 0;
}