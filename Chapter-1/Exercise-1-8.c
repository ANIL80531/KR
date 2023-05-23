#include<stdio.h>
int main(){
    // count blank tab and newline.
    int char_get = 0, blank_counter=0, tab_counter=0, newline_counter=0;
    while((char_get = getchar())!=EOF){
        if(char_get==' ')
            ++blank_counter;
        else if (char_get=='\t')
            ++tab_counter;
        else if (char_get=='\n')
            ++newline_counter;
    }
    printf("%d\t%d\t%d\n", blank_counter, tab_counter, newline_counter);
}