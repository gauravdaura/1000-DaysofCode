#include <stdio.h>

// void print_str(char *str) { printf("%s", str); } 
void print_str(char str[]) { printf("%s", str); } 

int main(void)
{
    char str[] = "Gaurav Daura";

    print_str(str);

    return 0;
}