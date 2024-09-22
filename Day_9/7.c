#include <stdio.h>

// A
// B A
// C B A
// D C B A
// E D C B A

int main(){

    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = i; j >= 'A'; j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    

}