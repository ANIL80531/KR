#include<stdio.h>
int main(){
    int char_count, line_count = 0;
    while((char_count=getchar())!=EOF){
        if(char_count=='\n')
            ++line_count;
    }
    printf("%d\n", line_count);
    // \n is a single character with ASCII value of 10.
    
}