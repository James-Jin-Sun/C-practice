#include <stdio.h>
// #include <math.h>
int main() {
    int a =3;
    printf("size of a: %lld\n", sizeof(a));  // sizeof(a) returns size in bytes, so use %lld for long long int
    // size of a =  4 bytes (32 bits)
    printf("range of int (signed): %lld to %d\n", -2147483648, 2147483647);
    printf("2^31-1 = %lld\n", (1LL<<31)-1);  // 2^31-1 = 2147483647; pow(2,31) returns double, so use %lld for long long int
    unsigned int b =4;
    printf("size of b: %lld\n", sizeof(b));  // size of b = 4 bytes (32 bits)
    printf("range of unsigned int: %d to %u\n", 0, 4294967295U);
    printf("2^32-1 = %lld\n", (1LL<<32)-1);  // 2^32-1 = 4294967295; use %lld for long long int
    return 0;
}