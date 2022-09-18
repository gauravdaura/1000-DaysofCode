#include <stdio.h>

// for GCC complier use the following instead of the #pragma 
// __attribute__((constructor)) func1
// __attribute__((destructor)) func2
#pragma startup func1
#pragma exit func2

void func1(void)
{
    printf("In func1\n");
}

void func2(){
    printf("In func2\n");
}

int main(void)
{
    func1();
    func2();
    printf("In main()\n");

    return 0;
}