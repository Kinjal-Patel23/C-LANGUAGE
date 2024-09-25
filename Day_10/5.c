#include <stdio.h>

// 5 4 3 2 1
// - 4 3 2 1
// - - 3 2 1
// - - - 2 1
// - - - - 1

int main(){

    for (int row = 5; row >= 1; row--)
    {
        for (int space = row - 1; space < 4; space++)
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