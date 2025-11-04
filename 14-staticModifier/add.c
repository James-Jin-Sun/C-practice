int increment(){
    int count = 0;
    count += 1;
    return count;
}
// 'static' make count1 accessible only within this file
// and count1 value can be retained between multiple calls to increment2() 
static int count1; // static global variable, initialized to 0 by default
int count2; // non-static global variable, initialized to 0 by default
int var=7;
// static int count2 = var; // error: initializer element is not constant, static global variables must be initialized with constant value
int increment2()
{
    count1 += 1;
    return count1;
}