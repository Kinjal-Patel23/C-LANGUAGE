#include <stdio.h>

int main()
{
    //1 to N using while loop
    
    int start = 1, N;

    printf("Enter the End number:");
    scanf("%d",&N);

    while (start <= N)
    {
        printf("%d ",start);
        start++;
    }
    
}