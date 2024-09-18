#include <stdio.h>

int main()
{
    //even number using do-while loop

    int start = 1, n;

    printf("Enter any number:");
    scanf("%d",&n);

    do
    {
        if (start % 2 == 0)
        {
            printf("%d ",start);
        }
        start++;

    } while (start <= n);
    
}