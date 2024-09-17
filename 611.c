
#include <stdio.h>

int main(){
    int a = 10;
    int b = 7;
    float c = 15.75;
    float d = 4;
    int e  = 8;
    float f = 5.6;
    float z = a/b + c*d - e%(int)f;
    printf("%f\n", z);
    z = a/b + c*d - e*f;
    printf("%f", z);
    return 0;
 }
