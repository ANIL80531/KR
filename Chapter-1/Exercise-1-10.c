#include<stdio.h>
int main()
{   
    /*
    // Replace tab with \t, backspace with \b and backslash with \\
    */
   int get_char = 0;
   while((get_char=getchar())!=EOF)
   {
    if(get_char=='\t')
        printf("\\t");
    else if(get_char=='\b')
        printf("\\b");
    else if(get_char=='\\')
        printf("\\\\");
    else
        putchar(get_char);
   }
}