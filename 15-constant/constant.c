# include <stdio.h>

// Using '#Define' to define constants
// Syntax: #define NAME value  (NAME is called a macro)
// job of preprocessor (not compiler) is to replace NAME with value before compilation 
# define PI 3.1415926  // no ';' (semicolon) at the end
#define add(x,y) x+y // use macro to define a function-like constant

//Using 'const' keyword to define constants
// Syntax: const data_type NAME;
const double g = 9.8; // const variable, should be initialized during declaration, once initialized, it becomes read-only

int main() {
    printf("Value of PI: %.7f\n", PI);
    printf("Result of add(3,4): %d\n", add(3,4));
    // first expanion then evaluation: 5*add(4,3) => 5*4+3 => 23
    printf("Result of 5*add(4,3): %d\n", 5*add(4, 3));
    printf("Date: %s\n", __DATE__); // predefined macro for current date
    printf("Time: %s\n", __TIME__); // predefined macro for current time
    printf("Value of g: %.1f m/s^2\n", g);
    // g = 10.0; // error: assignment of read-only variable 'g'
    return 0; 
}