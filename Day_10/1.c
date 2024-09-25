#include <stdio.h>

// - - - - 1
// - - - 2 1
// - - 3 2 1
// - 4 3 2 1
// 5 4 3 2 1

int main(){
    for (int row = 1; row <= 5; row++)
    {
        for (int space = 4; space >= row; space--)
        {
            printf("  ");
        }
        for (int col = row; col >= 1; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    
}