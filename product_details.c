#include <stdio.h>
int main()
{
    int id ;
    char name [100];
    float p1,p2,p3,qua1,que2,que3,total,disper,disamt,payamt;
    printf("Enter id of the product:\n");
    scanf("%d",&id);
    printf("Enter name of the product:\n");
    scanf("%s",&name);
    printf("Enter price of the First product : \n");
    scanf("%f",&p1);
    printf("Enter price of the Second product :\n");
    scanf("%f",&p2);
    printf("Enter price of the Third product :\n");
    scanf("%f",&p3);
    printf("Enter quantity of the First product :\n");
    scanf("%f",&qua1);
    printf("Enter price of the Second product :\n");
    scanf("%f",&que2);
    printf("Enter price of the Third product :\n");
    scanf("%f",&que3);

    total = (p1*qua1)+(p2*que2)+(p3*que3);
    printf("Total price of the product : %f\n",total);

    if (total >= 100000) {
        disper = 10;
    } else if (total >= 80000) {
        disper = 8;
    } else if (total >= 50000) {
        disper = 5;
    } else if (total >= 30000) {
        disper = 2;
    } else {
        disper = 0;
    }

    printf("The discount percentage is: %.2f%%\n", disper);

    disamt = (total*disper)/100;
    payamt= total-disamt;
    printf("The discout amount is : %.2f\n",disamt);
    printf("Final amount pay for the product is : %.2f\n",payamt);
    
    return 0;
}
