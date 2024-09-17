#include <stdio.h>

// explicit declaration
extern int GlobalVariable;

// function definition
void SomeFunction() {
    ++GlobalVariable;
}
