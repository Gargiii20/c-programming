#include <stdio.h>
int main ()
{
    float radius;
    float area;
    float circumference;
    printf("Enter radius of the circle ");
    scanf("%f",& radius);
    area = 3.14 * (radius * radius);
    circumference = 2 * 3.14 *radius;
    printf ("Area of the circle is %f \n",area);
    printf ("circumference of the circle is %f",circumference);
    return 0;
    
}