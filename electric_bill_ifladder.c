#include <stdio.h>
int main ()
{
    int unit;
    float bill ;
    printf("Enter total units:");
    scanf("%d",&unit);
    if (unit <100) 
    bill = unit * 8;
    else if(unit>100 && unit<=200)
    bill = (100*8)+((unit-100) * 10);
    else if(unit>200 && unit<=300)
    bill = (100*8)+(100*10)+((unit - 200) * 12);
    else if(unit>300 && unit<=400)
    bill = (100*8)+(100*10)+(100*12)+((unit -300) * 15); 
    else if(unit>400 && unit<=500)
    bill = (100*8)+(100*10)+(100*12) +((unit -400) * 17);
    else 
    bill = (100*8)+(100*10)+(100*12) +((unit -500) *20);
    printf("Tatal bill is %.2f\n",bill);
    return 0;
}