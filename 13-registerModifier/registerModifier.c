# include <stdio.h>
# include <time.h>
int main() {
    // 'register' suggests to the compiler to store the variable in a CPU register for faster access
    // It is the compiler's discretion whether to honor this request or not
    // Compiler will do necessary optimizations regardless of 'register' usage
    register int var=0;
    double start_time = clock();
    for (int i = 0; i < 100000000; i++)
    {
        var += i;
    }
    double end_time = clock();
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("register int var: %d\n", var);
    printf("Time taken (with register): %f seconds\n", time_taken);

    int var1 = 0;
    start_time = clock();
    for (int i = 0; i < 100000000; i++)
    {
        var1 += i;
    }
    end_time = clock();
    time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("int var1: %d\n", var1);
    printf("Time taken (without register): %f seconds\n", time_taken);
    return 0;
    return 0;
}