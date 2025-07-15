#include <stdio.h>
int main ()
{
    float u ,a,t,v,s;
    printf("Enter the value of initial velocity:");
    scanf("%f",& u);
    printf("Enter the value of acceleration:");
    scanf("%f",& a);
    printf("Enter the value of time:");
    scanf("%f",& t);
    v=(u)+(a*t);
    printf("Final velocity is :%f\n",v);    
    s=(u)+(a*t*t);
    printf("Distanca travelled is :%f\n",s);
    return 0;  
}