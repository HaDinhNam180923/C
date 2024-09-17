#include <stdio.h>

void swap(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    swap(&a, &b);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
