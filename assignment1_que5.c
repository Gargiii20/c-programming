#include <stdio.h>
int main ()
{
    float a,b,AM,HM;
    printf("Enter the first number:");
    scanf("%f",& a);
    printf("Enter the second number:");
    scanf("%f",& b); 
    AM = (a+b)/2;
    printf("Arithmetic mean of two numbers is:%f\n",AM);
    HM = a*b*(a+b);
    printf("Harmonic mean of two numbers is:%f\n",HM);  
    return 0; 
}