#include <stdio.h>

int main(){

    float p, r, n, interest;

    printf("Enter the value of principal amount: ");
    scanf("%f",&p);

    printf("Enter the valur of rate: ");
    scanf("%f",&r);

    printf("Enter the value of time: ");
    scanf("%f",&n);

    interest = (p * r * n) / 100;

    printf("Simple interest is :%0.2f", interest);
}