#include <stdio.h>
int main()
{
    int pid1,pid2,pid3 ;
    char name1 [100], name2[100],name3[100];
    float p1,p2,p3;
    int  qua1,qua2,qua3;
    float total,disper,disamt,payamt;
 
    printf("Enter id of the product one:\n");
    scanf("%d",&pid1);
    printf("Enter name of the product one:\n");
    scanf("%s",&name1);
    printf("Enter price of the First product : \n");
    scanf("%f",&p1);
    printf("Enter quantity of the First product :\n");
    scanf("%d",&qua1);

    printf("Enter id of the product two:\n");
    scanf("%d",&pid2);
    printf("Enter name of the product two:\n");
    scanf("%s",&name2);
    printf("Enter price of the second product : \n");
    scanf("%f",&p2);
    printf("Enter quantity of the second product :\n");
    scanf("%f",&qua2);

    printf("Enter id of the product three:\n");
    scanf("%d",&pid3);
    printf("Enter name of the product three:\n");
    scanf("%s",&name3);
    printf("Enter price of the third product : \n");
    scanf("%f",&p3);
    printf("Enter quantity of the third product :\n");
    scanf("%f",&qua3);
    
    total = (p1*qua1)+(p2*qua2)+(p3*qua3);
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
