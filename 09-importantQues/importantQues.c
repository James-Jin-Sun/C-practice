# include <stdio.h>
int main() {
    // 'printf' not only prints output but also returns the number of chars that successfully prints on screen
    // inner printf prints "Hello, World!" (13 characters), outer printf prints 13
    printf("%s", "Hello, World!\n");
    printf("%d\n", printf("%s", "Hello, World!")); // '%s' = string if characters
    printf("%10s\n", "Hello");  // minimum width of 10, here 5 spaces + "Hello"
    char c = 255;  // char is 1 byte, max val it can hold = 255
    c = c + 10;  // when try to exceed max, it follows 2 complement wrap around, 265 mod 2^8 = 9
    printf("%d\n", c);  // prints 9, becasue %d -> integer value of c.
    printf("%c\n", c);  // prints horizontal tab
    signed var1 = -1;  // becase complier automatically treats 'signed' as 'signed int'
    printf("%d\n", var1);
    printf(sizeof(var1) == sizeof(int) ? "true\n" : "false\n");
    unsigned var2 = 1;  // becase complier automatically treats 'unsigned' as 'unsigned int'
    printf("%u\n", var2);
    printf(sizeof(var2) == sizeof(unsigned int) ? "true\n" : "false\n");
    unsigned i = 1;
    int j = -4;
    printf("%d\n", i + j);  // prints signed int result -3
    printf("%u\n", i + j);  // -3 in 2s complement is 4294967293 for 32-bit unsigned int, so prints 4294967293
    return 0;
}