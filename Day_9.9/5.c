#include <stdio.h>

// 1
// 2 2
// 3 3 3 
// 4 4 4 4
// 5 5 5 5 5

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
        
            printf("%d ",i);
        }
        printf("\n");
    }
    
}