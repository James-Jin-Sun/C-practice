# include <stdio.h>
// auto int var; // "error: file-scope declaration of 'var' specifies 'auto'", 'auto' storage class specifier not allowed for global variables
int var;  // declaration: 
extern int a; // declaration of global variable 'a' defined in other.c, NO memory allocated here
extern int a;  // multiple declaration is allowed 
// int b = 7; // already defined in other.c, b=6, multiple definition is not allowed
int c = 8;
int main() {
    // Auto means automatic storage duration, which is the default for local variables
    int var1 =5;
    printf("var1: %d\n", var1);
    // memory allocated for var1 is automatically freed when it goes out of scope (i.e., when the block ends)
    auto int var2 =10;  // same as int var2 =10, 'auto' is optional
    printf("var2: %d\n", var2);
    auto int var3;
    printf("var3(uninitialized auto int): %d\n", var3); // may print garbage(random) value
    printf("global auto int var (uninitialized): %d\n", var); // uninitialized global variable will default to 0, prints 0
    printf("extern int a (from other.c): %d\n", a); // prints 5
    extern int b; // declaration of global variable 'b' defined in other.c
    printf("extern int b (from other.c): %d\n", b); // prints 6
    extern int c;  // c declared outside main()
    printf("extern int c (from varModifier.c): %d\n", c); // prints 8
    return 0;

}