#include<stdio.h>
int main()
{
    int id ;
    float BS,HRA,DA,tax,home_salary;

    printf("Enter the id of the employee :");
    scanf("%d",&id);
    printf("Enter basic salary of the employee :");
    scanf("%f",&BS);

    HRA = 0.10 * BS;
    DA = 0.30 * BS;
    tax = 0.5 * BS;

    home_salary = BS+DA+HRA-tax;

    printf("-------------Employee salary details-------------");
    printf("\nEmployee id :                        %d",id);
    printf("\nBasic salary of the employee:        %f",BS);
    printf("\nEnter DA of the employee:            %f",DA);
    printf("\nEnter HRA of the employee:           %f",HRA);
    printf("\nEnter tax pay by the employee        %f",tax);
    printf("\nHome salary of the employee is :     %f",home_salary);
    return 0;
}