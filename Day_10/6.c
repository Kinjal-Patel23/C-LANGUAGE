#include <stdio.h>

// 5 4 3 2 1
// - 5 4 3 2
// - - 5 4 3
// - - - 5 4
// - - - - 5

int main(){
    for (int row = 1; row <= 5; row++)
    {
        for (int space = row - 1; space >= 1 ; space--)
        {
            printf("- ");
        }
        for (int col = 5; col >= row; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    
}



