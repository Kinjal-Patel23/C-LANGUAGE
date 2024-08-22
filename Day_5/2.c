#include <stdio.h>

int main(){

    int a;

    printf("Enter the value of A: ");
    scanf("%d",&a);

    if(a > 0)
    {
        printf("%d number is Positive",a);
    }
    else if(a == 0)
    {
        printf("%d number is Neutral",a);
    }
    else{
        printf("%d number is Negative",a);
    }
}