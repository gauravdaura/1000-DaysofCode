// Syntax: difftime(time2, time1)
#include <stdio.h>
#include <time.h>

int main(void)
{
    int sec = 0;
    time_t time1, time2;

    time(&time1);
    for (sec = 1; sec <= 6; sec++)
        sleep(1);

    time(&time2);
    printf("%.2f", difftime(time2, time1));

    return 0;
}