#include <stdio.h>
/*
    printing all numbers in base16 numbering system
*/
int main(void){
    for(int num =0 ; num <= 9;num++){
        putchar((num%10)+'0');
    }
    for(char ch ='A' ; ch <= 'F';ch++){
        putchar(ch);
    }
    putchar('\n');
    
    return(0);
}
