#include <stdio.h>

typedef enum Boolean
{
    false=0,
    true
} bool;

// function pointer to 0 --> function pointer to a function
// at address 0 which takes no arg, returns nothing.
#define CRASH() do{ \
            ((void(*)())0)(); \ 
        } while(false) 

int main(void)
{
    CRASH();
    
    return 0;
}