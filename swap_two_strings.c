// Two 2 methods of swapping strings:
//      1. if strings are stored as char *
//      2. if strings are stored as arrays
#include <stdio.h>

// 1st method
/*
void swap(char **str1, char **str2)
{
    char *temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}


int main(void)
{
    char *str1; // = "Gaurav";
    char *str2; // = "Daura";

    str1 = "Gaurav";
    str2 = "Daura";

    printf("%s %s \n", str1, str2);
    printf("Content they points to address: %p %p \n", str1, str2);
    // printf("Pointers' own address:       %p %p \n", (void*) &str1, (void*) &str2);  // not working for vscode compile for some reason

    swap(&str1, &str2);
    printf("%s %s \n", str1, str2);
    printf("Content they points to address: %p %p \n", str1, str2);

    return 0;
}
*/

// 2nd method
#include <stdlib.h>
#include <string.h>

void swap(char *str1, char *str2)
{
    char *temp = (char *) malloc((strlen(str1)+1) * sizeof(char));
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    free(temp);
}

int main(void)
{
    char str1[10] = "Gaurav";
    char str2[10] = "Daura";
    printf("%s %s\n", str1, str2);

    swap(str1, str2);
    printf("%s %s\n", str1, str2);

    return 0;
}

