#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x coordinate of the point: ");
    scanf("%d",&x);
    printf("Enter y coordinate of the point: ");
    scanf("%d",&y);

    if(x==0 && y==0){
        printf("Points lies at the origin");
    }
    else{
        if(x==0){
            printf("Points lies on y axis");
        }
        else if (y==0)
        {
            printf("Points lies on x axis");
        }
        else{
            if(x>0 && y>0){
                printf("Points lies in quadrant I");
            }
            else if(x<0 && y>0){
                printf("Points lies in quadrant II");
            }
            else if(x<0 && y<0){
                printf("Points lies in quadrant III");
            }
            else{
                printf("Points lies in quadrant IV");
            }
        }
        
    }
    return 0;
}