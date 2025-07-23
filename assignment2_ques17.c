#include<stdio.h>
int main()
{
    int qua1,qua2,qua3;
    float rate1,rate2,rate3;
    float amt1,amt2,amt3,total,discount,finalamt;
     
    printf("Enter quantity 1 : ");
    scanf("%d",&qua1);
    printf("Enter quantity 2 : ");
    scanf("%d",&qua2);
    printf("Enter quantity 3 : ");
    scanf("%d",&qua3);

    printf("Enter rate of quantity 1 : ");
    scanf("%f",&rate1);
    printf("Enter rate of quantity 2 : ");
    scanf("%f",&rate2);
    printf("Enter rate of quantity 3 : ");
    scanf("%f",&rate3);

    amt1 = qua1 * rate1;
    amt2 = qua2 * rate2;
    amt3 = qua3 * rate3;

    total = amt1+amt2+amt3;

        if(total >10000){
            discount = 0.20 * total;
        }
        else if(total>5000){
            discount = 0.15 * total;
        }
        else if(total>2000){
            discount = 0.08 * total;
        }
        else{
            discount = 0;
        }
    finalamt = total - discount;

    printf("Total amount is %.2f \n",total);
    printf("Discount is %.2f \n",discount);
    printf("Final amount is %.2f \n",finalamt);

    return 0;

}