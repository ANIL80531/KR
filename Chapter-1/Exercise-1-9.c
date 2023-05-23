#include <stdio.h>
int main()
{    // whitespace program
    int char_get = 0;
    int pspace = 0;   // previous space
    while ((char_get = getchar()) != EOF)
    {
        if (char_get != ' ' && char_get != '\t')
        {
            putchar(char_get);
            pspace = 0;
        }
        else
        {
            ++pspace;
            if(pspace==1)
                putchar(' ');
        }
    }
}