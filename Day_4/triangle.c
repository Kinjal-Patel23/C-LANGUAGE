#include <stdio.h>

int main(){

    float angle1, angle2, angle3;

    printf("Enter the value of angle1: ");
    scanf("%f",&angle1);

    printf("Enter the value of angle2: ");
    scanf("%f",&angle2);

    angle3 = 180 - (angle1 + angle2);

    printf("Angle-3 is: %f",angle3);
}