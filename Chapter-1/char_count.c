#include<stdio.h>
int main(){
    long no_of_char = 0;
    while(getchar()!=EOF){
        ++no_of_char;   // Increment operator. It increase value by +1. It is equal to a = a + 1. It can be prefixxx ++a or postfix a++.
        printf("%ld\n", no_of_char);  // %ld is formatter for long integer.
        // %f is used for both float and double.
    }
    if(1){
        ;   // NULL statement = do nothing
    }
}