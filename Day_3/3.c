#include <stdio.h>

int main(){

    int x,y,ans;

    printf("Enter the value of x: ");
    scanf("%d",&x);

    printf("Enter the value of y: ");
    scanf("%d",&y);

    ans = ((x * x * x) + (3 * x * x * y) + (3 * x * y * y) + (y * y * y));

    printf("Answer is: %d",ans);

}