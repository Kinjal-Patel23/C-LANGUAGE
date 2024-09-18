#include <stdio.h>

int main(){

    //Alphabet Skipper

    char c = 'a';

    do
    {
        printf("%c ", c);
        c = c + 4;
    } while (c <= 'z');
    
}