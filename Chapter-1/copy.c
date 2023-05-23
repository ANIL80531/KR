#include<stdio.h>
int main(){
    /*
    int c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    */
    printf("%d",EOF);
    putchar('\n');
    for (int d = getchar(); d != EOF;)
    {
        putchar(d);
        d = getchar();
    }
    printf("%d\n",(getchar() != EOF));

    

}