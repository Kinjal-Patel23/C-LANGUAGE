#include <stdio.h>

int main()
{
    //odd number using while loop
    
    int end = 1, N;

    printf("Enter any number:");
    scanf("%d",&N);

    while (N >= end)
    {
        if (N % 2 != 0)
        {
            printf("%d ",N);
        }
        N--;
    }    
}