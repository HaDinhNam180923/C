#include <stdio.h>

int main() {
    char *ptr = "ABCDE";

    char *ch;
    ch = &*&*ptr;


    printf("%c\n", *ch + 3);

    return 0;
}
