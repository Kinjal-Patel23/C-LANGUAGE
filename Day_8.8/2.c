#include <stdio.h>

int main(){

    //Digit Counter

    int n, count = 0;

    printf("Enter any number:");
    scanf("%d",&n);

    do
    {
        n = n / 10;
        count ++;


    } while (0 < n);
    
    printf("Number of digits: %d", count);
}