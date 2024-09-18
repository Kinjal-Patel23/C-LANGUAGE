#include <stdio.h>

int main()
{
    // int a = 0, b = 1, c, n, i;

    // printf("Enter any Number: ");
    // scanf("%d",&n);

    // printf("%d %d ",a,b);

    // for (i = 2; i < n; i++)
    // {
    //    c = a + b;
    //    printf("%d ",c);
    //    a = b;
    //    b = c;
    // }

    int v1= -1, v2 = 1, v3, n, i;

    printf("Enter any Number: ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        v3 = v1 + v2;
        printf("%d ",v3);
        v1 = v2;
        v2 = v3;
    }    
}