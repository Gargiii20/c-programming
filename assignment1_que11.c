#include<stdio.h>
int main()
{
    float room_length,room_width,room_height;
    float door_width,door_height;
    float win_width,win_height;
    float wall_area,door_area,window_area,paint_area,roof_area;

    printf("Enter length,width and height of the room (in meter) :");
    scanf("%f%f%f",&room_length,&room_width,&room_height);

    printf("Enter width and height of the door :");
    scanf("%f%f",&door_width,&door_height);

    printf("Enter width and height of the one window :");
    scanf("%f %f",&win_width,&win_height);

    wall_area = 2 *room_height*(room_length+room_width);
    door_area = door_width*door_height;
    window_area= win_width*win_height;
    paint_area= wall_area-door_area-window_area;
    roof_area = room_length * room_width;
    printf("\n-----------------------------------------------");
    printf("\nRoom length, width and height :                %f %f %f",room_length,room_width,room_height);
    printf("\nDoor width and height :                        %f %f",door_width,door_height);
    printf("\nWindow width and height :                      %f %f",win_width,win_height);
    printf("\nWall area :                                    %.2f",wall_area);
    printf("\nDoor area :                                    %.2f",door_area);
    printf("\nWindow area :                                  %.2f",window_area);
    printf("\nPainted area :                                 %.2f",paint_area);
    printf("\nRoof area :                                    %.2f",roof_area);
    return 0;
}