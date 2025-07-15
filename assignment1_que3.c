#include <stdio.h>
int main ()
{
    float f,c,k;
    printf("Enter the value of feahrenheit :");
    scanf("%f",& f);
    c = (5.0/9.0)*(f-32);
    printf ("Temperature in celsius is %f \n",c);
    k = c + 273.15;
    printf ("Temperature in kelvin is %f \n",k);
    return 0;    
}