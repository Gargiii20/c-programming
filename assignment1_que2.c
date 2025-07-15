#include <stdio.h>
int main ()
{
    float radius , height;
    float surface_area ;
    float volume;
    printf("Enter radius of the cylinder ");
    scanf("%f",& radius);
     printf("Enter height of the cylinder ");
    scanf("%f",& height);
    surface_area = 2* 3.14*radius*radius + 2*3.14*radius*height;
    volume = 3.14*radius*radius*height;
    printf ("Surface area of cylinder is %f \n",surface_area);
    printf ("volume of cylinder is %f",volume);
    return 0;

}