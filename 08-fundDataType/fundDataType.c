# include <stdio.h>
int main() {
    // fixed poit representation
    float var1 = 3.1415926535897932;  // precision of float is 7 decimal places
    double var2 = 3.1415926535897932;  // precision of double is 15-16 decimal places
    long double var3 = 3.141592653589793213456L;  // precision of long double is 18-21 decimal places
    // flaoting point representation
    printf("size of float: %zu bytes\n", sizeof(float));
    printf("var1 (float): %.16f\n", var1); // display 16 deicimal places
    printf("size of double: %zu bytes\n", sizeof(double));
    printf("var2 (double): %0.16f\n", var2); //display 16 decimial places
    printf("size of long double: %zu bytes\n", sizeof(long double));
    // here, print as double as 'printf("%Lf", ...)' does not work with this compiler
    printf("var3 (longdouble): %0.21Lf\n", (double)var3); // display 21 decimal places

    // unsigned char *p = (unsigned char *)&var3;
    // printf("var3 bytes: ");
    // for (size_t i = 0; i < sizeof(var3); ++i)
    //     printf("%02X ", p[i]);
    // printf("\n");

    int var4 = 4/9;  // integer division, result is 0
    float var5 = 4/9;  // still integer division, result is 0.0 converted to float
    float var6 = 4.0/9.0;  // floating point division

    printf("var4 (int 4/9): %d\n", var4);
    printf("var5 (float 4/9): %f\n", var5);
    printf("var6 (float 4.0/9.0): %.2f\n", var6);
    return 0;
}