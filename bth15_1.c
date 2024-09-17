#include <stdio.h>

// implicit definition
int GlobalVariable;

// function prototype (declaration)
void SomeFunction();

int main() {
    GlobalVariable = 1;
    printf("Before => GlobalVariable: %d\n", GlobalVariable);
    SomeFunction();
    printf("After => GlobalVariable: %d\n", GlobalVariable);
    return 0;
}
