#include <stdio.h>

void swap3(int *a, int *b, int *c) {
    int temp;

    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    swap3(&a, &b, &c);

    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
