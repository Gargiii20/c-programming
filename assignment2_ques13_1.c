#include<stdio.h>
int main()
{
    int hr , min, sec;

    printf("Enter time (hh mm ss): ");
    scanf("%d%d%d",&hr,&min,&sec);

    if(hr>=0 && hr<24)
    {
        if(min>=0 && min<60)
        {
            if(sec>=0 && sec<60)
            {
                printf("Time is valid \n ");
            }
            else
                printf("Second is invalid \n ");
        }
        else 
            printf("Minute is invalid \n ");
    }
    else 
        printf("Hour is invalid \n ");
    
    return 0;
}