#include <stdio.h>
int main() {
    char char1 = 'A';
    // char char2 = "A";  // "A" is a string literal(type char *), should use single quotes for char
    char var1 = 65; // ASCII value of 'A' is 65
    char var2 = 128; // 128 and -128 represent the same bit pattern in 2's complement
    char var3 = -128;
    char var4 = 129;
    char var5 = -127; // 129 and -127 represent the same bit pattern in 2's complement
    unsigned char uchar1 = 254; // max value=255, used 254 to display char
    printf("2^8=%d\n", (1<<8)); // 2^8=256
    printf("size of char: %zu bytes\n", sizeof(char));
    printf("char1: %c\n",char1);
    // printf("char2: %c\n",char2);
    printf("var1: %c\n", var1);
    printf("var2: %c\n", var2);
    printf("var3: %c\n", var3);
    printf("var4: %c\n", var4);
    printf("var5: %c\n", var5);
    printf("size of unsigned char: %zu bytes\n", sizeof(unsigned char));
    printf("uchar1: %c\n", uchar1);
    printf("uchar1 +2: %c\n:", (uchar1+2)); // overflow, wraps around to 0 (NUL character, which is not printable)
    return 0;
}