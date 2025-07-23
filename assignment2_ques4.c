#include<stdio.h>
int main()
{
    float sp,cp,profit_or_loss;
    printf("Enter cost price: ");
    scanf("%f",&cp);
    printf("Enter selling price: ");
    scanf("%f",&sp);

    if(sp>cp){
        profit_or_loss = sp-cp;
        printf("Total profit is %.2f\n",profit_or_loss);
    }
    else if(cp>sp){
        profit_or_loss= cp-sp;
        printf("Total loss is %.2f\n",profit_or_loss);
    }
    else
        printf("No profit no loss \n");
    
    return 0;
}