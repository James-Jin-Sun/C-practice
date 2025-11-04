# include <stdio.h>
# include <stdlib.h>

int increment();  // declaration of function defined in add.c
int increment2(); // declaration of function defined in add.c

int main(){
    int value;
    value = increment();
    value = increment();
    value = increment();

    int value1;
    value1 = increment2();
    value1 = increment2();
    value1 = increment2();

    extern int count2; // declaration of non-static global variable defined in add.c
    printf("%d\n", value);  // will print 1
    printf("%d\n", value1);  // will print 3
    printf("non-static global variable count2+5: %d\n", count2+5); // will print 3
    extern int count1; // declaration of static global variable defined in add.c
    printf("static global variable count1: %d\n", count1);  // error: 'count1' undeclared (as static global variables have internal linkage)
    return 0;
}