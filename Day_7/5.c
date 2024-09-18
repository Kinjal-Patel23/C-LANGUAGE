#include <stdio.h>

int main()
{
    //leap year using while loop
    
    int start, end;

    printf("Enter the start year:");
    scanf("%d",&start);

    printf("Enter the end year:");
    scanf("%d",&end);

    while (start <= end)
    {
        if (start % 4 == 0)
        {
            printf("%d ",start);
        }
        start++;
    }
    
}