#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of A: ");
    scanf("%d",&a);

    printf("Enter the value of B: ");
    scanf("%d",&b);

    if(a < b)
    {
        printf("%d is Minimum",a);
    }
    else
    {
        printf("%d is Minimum",b);
    }
}