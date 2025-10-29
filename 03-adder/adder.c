#include<stdio.h>
int add(int a, int b) {
    return a + b;
}

int main() {
    int x=5;
    int y=7;
    int result = add(x,y);
    printf("The sum of %d and %d = %d\n", x, y, result);
    return 0;
}