#include <stdio.h>

// 1 0 1 0 1
// - 0 1 0 1
// - - 1 0 1
// - - - 0 1
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
            if (col % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            
        }
        
        printf("\n");
    }
    

}