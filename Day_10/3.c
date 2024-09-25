#include <stdio.h>

// - - - - 5
// - - - 4 4
// - - 3 3 3
// - 2 2 2 2
// 1 1 1 1 1

int main(){

   for (int row = 5; row >= 1; row--)
   {
        for (int space = row - 1; space >= 1; space--)
        {
            printf("  ");
        }
        for (int col = 5; col >= row; col--)
        {
            printf("%d ",row);
        }
        
        printf("\n");
   }
   

}