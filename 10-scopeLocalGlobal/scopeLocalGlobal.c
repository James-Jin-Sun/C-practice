# include <stdio.h>
int main(){
    // scope = lifetime
    // Def'n of scope: the area under which a variable is applicale or alive.
    // Strict Def'n: a block or a region where a variable is declared, defined and used
    // and when this block/region ends, the variable is automatically destroyed.
    int var = 34;  // var is local to main()
    // int var = 3; // error: redefinition of 'var'
    {
        int var = 35;
        printf("%d\n", var);  // prints 35, inner block's var shadows outer block's var
    }

    printf("%d\n", var);

    // // will get warning: 'ISO C forbids nested functions'
    // int func(){   
    //     var += 1; // var is accessible here as func() is defined inside main()
    //     printf("In func %d\n", var); // prints 35
    //     return 0;
    // }

    // func();
    return 0;
}
// int func(){
//     printf("In func %d\n", var); // 'error: 'var' undeclared' during build
//     return 0;
// }