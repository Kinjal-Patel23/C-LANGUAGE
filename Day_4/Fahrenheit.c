#include <stdio.h>

// Fahrenheit

int main(){
    
    float f, c;

    printf("Enter the value of celsius: ");
    scanf("%f",&c);

    f = (c * 9 / 5) + 32;

    printf("Fahrenheit is: %f",f);

}