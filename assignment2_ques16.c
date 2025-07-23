#include<stdio.h>
int main()
{
    float m1,m2,m3,total_marks,average;
    printf("Enter marks of subject 1 : ");
    scanf("%f",&m1);
    printf("Enter marks of subject 2 : ");
    scanf("%f",&m2);
    printf("Enter marks of subject 3 : ");
    scanf("%f",&m3);

    total_marks = m1+m2+m3;
    average = total_marks/3;
    printf("Total marks secured : %.2f \n",total_marks );
    printf("Average percentage is %.2f \n",average );

    if(average >= 60){
        printf("Class: First class \n");
    }
    else if (average >= 50){
        printf("Class: Second class \n");
    }
    else if (average >=35){
        printf("Class: Pass class \n");
    }
    else {
        printf("Class: Fail \n");
    }
    return 0;
}