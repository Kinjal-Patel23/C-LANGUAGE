#include <stdio.h>

int main(){

    //Digit Addition (first and last digits.)

    int n, sum, first, last, a;

    printf("Enter any Number:");
    scanf("%d",&n);

    last = n % 10;
    a = n;
    while (a >= 10)
    {
        
        a = a / 10;
        
    }
    first = a;
    sum = first + last;
    printf("Sum of :%d ",sum);
    
}