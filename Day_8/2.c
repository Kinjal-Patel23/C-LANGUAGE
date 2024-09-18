#include <stdio.h>

int main()
{
    int i, n, fact=1;

    printf("Enter any number: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        fact = i * fact;
    }
    printf("factorial no. %d is : %d",n,fact);
}