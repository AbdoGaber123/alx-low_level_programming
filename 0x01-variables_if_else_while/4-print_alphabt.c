
#include <stdio.h>
  
int main()
{
  
    // Get the character to be written
    char ch ;
  
    for (ch = 'a'; ch <= 'z'; ch++){
        if(ch !='e' && ch != 'q'){
            putchar(ch);
        }
    }
    putchar('\n');
        
  
    return (0);
}
