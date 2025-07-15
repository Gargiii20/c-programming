#include <stdio.h>
int main ()
{
    float l,b,h,sa,vol;
    printf("Enter the length of cuboid :");
    scanf("%f",& l);
    printf("Enter the breadth of cuboid:");
    scanf("%f",& b);
    printf("Enter the height of cuboid:");
    scanf("%f",& h);
    sa =2*(l*b+l*h+b*h);
    printf("Surface are of cuboid is: %f\n",sa);
    vol=l*b*h;
    printf("Volume of the cuboid is: %f\n",vol);
    return 0;
} 