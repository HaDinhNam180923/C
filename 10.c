#include <stdio.h>

int main() {
    int a;
    char *x;
    x = (char *) &a;
    a = 512;
    x[0] = 12;
    x[1] = 2;
    x[2] = 1;
    printf("%d\n", a);
    return 0;
}
