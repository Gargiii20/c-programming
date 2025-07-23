#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x coordinate of a point: ");
    scanf("%d",&x);
    printf("Enter y coordinate of a point: ");
    scanf("%d",&y);

    if(x>0 && y>0){
        printf("Point lies in quadrant I");
    }
    else if(x<0 && y>0){
        printf("\nPoint lies in quadrant II");
    }
    else if(x<0 && y<0){
        printf("\nPoint lies in quadrant III");
    }
    else if(x>0 && y<0){
        printf("\nPoint lIes in quadrant IV");
    }
    else if(x==0 && y==0){
        printf("\nPoints lies at origin");
    }
    else if(y==0 && x!=0){
        printf("\nPoints lies on y-axis");
    }
    else{
        printf("\nPoints lies on x-axis");
    }
    return 0;
}