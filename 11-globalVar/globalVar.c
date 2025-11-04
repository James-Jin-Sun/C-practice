# include <stdio.h>
int func();
int var = 10; // global variable

int main(){
    int var = 3;  // local variable
    printf("In main(), local var: %d\n", var); // prints 3
    func();
    return 0;
}
int func(){
    printf("In func(), global var: %d\n", var); // prints 10
    return 0;
}