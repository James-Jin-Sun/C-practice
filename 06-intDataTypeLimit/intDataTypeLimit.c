#include <stdio.h>
#include <limits.h>

int main() {
    int var1 = INT_MIN;
    int var2 = INT_MAX;
    unsigned int var3 = UINT_MAX;
    short int var4 = SHRT_MIN;
    short int var5 = SHRT_MAX;
    long int var6 = LONG_MIN;
    long int var7 = LONG_MAX;
    long unsigned int var8 = ULONG_MAX;
    long long int var9 = LLONG_MIN;
    long long int var10 = LLONG_MAX;
    long long unsigned int var11 = ULLONG_MAX;
    unsigned int var12 = 4294967296; // 2^32, exceeds unsigned int range
    unsigned int var13 = -2147483649; // -2^31-1, exceeds unsigned int range
    int var14 = 2147483648; // 2^31, exceeds signed int range

    printf("size of int(signed): %zu bytes\n", sizeof(int));
    // since 0 is reprented as positive in int(singed), so max +ve value is 2^(n-1)-1 instead of 2^(n-1)
    printf("range of int (signed): %d to %d\n", var1, var2);
    printf("range of int (unsigned): %u to %u\n", 0, var3);  // for unsigned int, use %u
    printf("size of short int(signed): %lld bytes\n", sizeof(short int)); // %lld is for long long int
    // type returned by sizeof is size_t, which may differ from long long int on some systems
    printf("size of short int(signed): %zu bytes\n", sizeof(short int));  // %zu is the correct format specifier for size_t
    printf("range of short int(signed): %d to %d\n", var4, var5);
    printf("2^15-1 = %d\n", (1<<15)-1);  // 2^15-1 = 32767
    printf("size of long int(signed): %zu bytes\n", sizeof(long int));
    printf("range of long int (signed): %ld to %ld\n", var6, var7);  // %ld is for long int
    printf("size of long unsigned int: %zu bytes\n", sizeof(long unsigned int));
    // 0UL is 0 as unsigned long int
    printf("range of long int (unsigned): %lu to %lu\n", 0UL, var8); // %lu for unsigned long int
    // 1ULL is 1 as unsigned long long int
    printf("2^32-1 = %llu\n", (1ULL<<32)-1); // 2^32-1 = 4294967295
    printf("size of long long int(signed): %zu bytes\n", sizeof(long long int));
    printf("range of long long int (signed): %lld to %lld\n", var9, var10);
    //if use (1LL<<63)-1, the sign bit will be set, resulting in a negative number due to two's complement representation
    printf("2^63-1 = %llu\n", (1ULL<<63)-1);  // 2^63-1 = 9223372036854775807
    printf("size of long long unsigned int: %zu bytes\n", sizeof(long long unsigned int));
    printf("range of long long int (unsigned): %llu to %llu\n", 0ULL, var11);
    // overflow is like clock, 13 o'clock is 1 o'clock, so max+1 => min
    printf("value of var12 (4294967296): %u\n", var12); // will print 0 due to overflow
    printf("value of var13 (-2147483649): %u\n", var13); // will print (Max)2147483647 due to overflow
    printf("value of var14 (2147483648): %d\n", var14); // will print (Min)-2147483648 due to overflow
    return 0;
}