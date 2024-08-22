#include <stdio.h>

int main(){

    const float pi = 3.14;
    float r, perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%f",&r);

    perimeter = (2 * 3.14 * r);

    printf("Perimeter of the circle:%0.2f",perimeter);

}