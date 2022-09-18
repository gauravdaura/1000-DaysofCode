#include <stdio.h>
#include <math.h>

int main(void)
{
    float var1, var2, var3, var4, var5;
    var1 =  1.6;
    var2 = -1.4;
    var3 =  2.0;
    var4 =  100.0;
    var5 =  3.0;
    double integer;
    double fraction;
    double var6 = 8.1434;

    printf("%f\n", ceil(var1));
    printf("%f\n", floor(var1));
    printf("%f\n", fabs(var2));
    printf("%f\n", log(var3));          // natural log (ln) or log base to power e when no base defined
    printf("%f\n", log10(var4));
    printf("%f\n", fmod(var4, var5));   // return rem of x/y
    printf("%f\n", sqrt(var4));
    printf("%f\n", pow(var4, var3));

    fraction = modf(var6, &integer);    // return fraction part and set the integer part at an address passed
    printf("Integer: %lf and Decimal(fraction): %f\n", integer, fraction);

    printf("%f\n", exp(var3));

    return 0;
}